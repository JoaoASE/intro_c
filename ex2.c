/*Crie um programa que leia um valor de hora e informe quantos minutos se
 * passaram desde o início do dia.*/
#include <stdio.h>

int main() {

  int horas, minutos;
  printf("Informe que horas são: ");
  scanf("%d", &horas);
  minutos = horas * 60;
  printf("Ja se passaram %d minutos", minutos);
  return 0;
}
