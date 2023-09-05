#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

  for (int i = 1; i <= 3; i++) {
    int chute;
    int num = 42;
    printf("Qual o seu chute ?\n");
    scanf("%d", &chute);
    int acertou = (chute == num);
    if (acertou) {
      printf("Parabéns ! Acertou.\n");
      break;
    } else {
      int maior = (chute > num);
      if (maior) {
        printf("\nSeu chute foi maior que o numero.Tente um valor menor.\n");
      } else {
        printf("\nSeu chute foi menor que o numero. Tente um valor maior.\n");
      }
    }
  }
  return 0;
}
