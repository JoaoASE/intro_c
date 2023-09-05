#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  float C, F, K;
  for (C = -10; C <= 100; C++) {
    F = 9 * C / 5.0 + 32;
    K = C + 273.15;
    printf("C =%.0f    F = %.2f   K = %.2f  \n", C, F, K);
  }
  return 0;
}
