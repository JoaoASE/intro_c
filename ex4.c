/*Escreva um programa em C que receba um valor inteiro e diga se ele é múltiplo
 * de 5.*/
#include <stdio.h>

int main() {
  int num;
  printf("Digite o numero:");
  scanf("%d", &num);
  if (num % 5 == 0) {
    printf("Numero divisivel por 5");
  } else {
    printf("Não eh divisivel por 5");
  }

  return 0;
}
