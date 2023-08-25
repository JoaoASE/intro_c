#include <stdio.h>
int main() {
  float altura, pesoideal;
  char sexo;
  printf("Qual sua altura? ");
  scanf("%f", &altura);

  // Adicione um espaço antes do formato de leitura do caractere
  printf("Qual seu sexo? ");
  scanf(" %c", &sexo);

  if (sexo == 'M') {
    pesoideal = (72.7 * altura) - 58;
    printf("%.2f", pesoideal);
  } else {
    if (sexo == 'F') {
      pesoideal = (62.1 * altura) - 44.7;
      printf("%.2f", pesoideal);
    }
  }

  return 0;
}
