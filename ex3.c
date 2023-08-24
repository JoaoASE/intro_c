/*Crie um programa para ler 3 notas e mostrar a média delas.*/
#include <stdio.h>

int main() {
  float A, B, C;
  printf("Digite aqui a sua nota nas 3 provas: ");
  scanf("%f %f %f", &A, &B, &C);
  float media = (A + B + C) / 3.0;
  printf("A media das notas foi %.2f", media);

  return 0;
}
