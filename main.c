#include <stdio.h>

int main() {

  float salario_min;
  float meu_salario;
  printf("Digite o valor do salario minimo: ");
  scanf("%f", &salario_min);
  printf("Digite o seu salario: ");
  scanf("%f", &meu_salario);
  int qtd_min = (meu_salario / salario_min);
  printf("O seu salário equivale a %d salarios minimos", qtd_min);
  return 0;
}
