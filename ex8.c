#include <math.h>
#include <stdio.h>
int main() {
  float a, b, c;
  printf("Digite os valores dos coeficientes: ");
  scanf("%f %f %f", &a, &b, &c);
  if (a == 0) {
    printf("Nao eh equacao segundo grau");
  } else {
    float delta = b * b - 4 * a * c;
    if (delta < 0) {
      printf("Nao existe raiz");
    } else if (delta == 0) {
      printf("Raiz unica");
    } else {
      float x1 = (-b + sqrt(delta)) / (2 * a);
      float x2 = (-b - sqrt(delta)) / (2 * a);
      printf("Delta eh %.2f", delta);
      printf("O valor das raizes sao: %.2f %.2f", x1, x2);
    }
  }
  return 0;
}
