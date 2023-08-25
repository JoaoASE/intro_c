#include <stdio.h>
int main() {
  char jogador1, jogador2;
  printf("(R) Pedra  (P) Papel (S)Tesoura \n");
  printf("Entre com as escolhas dos jogadores: ");
  scanf("%c %c", &jogador1, &jogador2);
  if (jogador1 == jogador2) {
    printf("Empate");
  } else {
    if (jogador1 == 'R' && jogador2 == 'P') {
      printf("Derrota Jogador 1");
    } else if (jogador1 == 'P' && jogador2 == 'S') {
      printf("Derrota Jogador1");
    } else if (jogador1 == 'S' && jogador2 == 'R') {
      printf("Derrota Jogador1");
    } else {
      printf("Vitória Jogador1");
    }
  }
  return 0;
}
