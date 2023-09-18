#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, n1, x;
  float media = 0;
  printf("Digite n :\n");
  scanf("%d", &n);
  n1 = 0;
  while (n1 < n) {
    printf("Digite X:\n");
    scanf("%d", &x);
    media = media + x;
    n1 = n1 + 1;
  }
  printf("%.2f", media);
  return 0;
}
