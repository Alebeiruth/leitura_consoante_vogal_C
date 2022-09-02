#include <stdio.h>

int main() {

  int con = 0;
  int vog = 0;
  char caract[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

  while (caract[0] != '0') {
    printf("\nDigite um caracter, ou digite 0 para sair: ");
    scanf("%s", caract);

    if ((caract[0] == 'a') || (caract[0] == 'e') || (caract[0] == 'i') ||
        (caract[0] == 'o') || (caract[0] == 'u' || (caract[0] == 'A')) ||
        (caract[0] == 'E') || (caract[0] == 'I') || (caract[0] == 'O') ||
        (caract[0] == 'U')) {
      printf("\nA letra (%s) é uma vogal.", caract);
      vog++;

    } else if (caract[0] == '0') {
      break;

    } else {
      printf("\nA letra (%s) é uma consoante.", caract);
      con++;
    }
  }

  printf("\nVoce saiu!!");
  printf("\nnumero de vogais digitadas: %i", vog);
  printf("\nnumero de consoantes digitadas: %i", con - 1);
}
