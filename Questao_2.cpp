#include <stdio.h>
#include <stdlib.h>

int main() {
  int inicio, fim, i, contador;
  printf("Digite o numero de inicio: ");
  scanf("%d", &inicio);
  printf("Digite o numero de fim: ");
  scanf("%d", &fim);
  contador = 0;
  printf("Os pares encontrados dentro deste intervalo sao: ");
  for (i=inicio; i<=fim; i++) {
    if (i % 2 == 0) {
      printf("%d\n", i);
      contador++;
    }
  }
  printf("total de pares: %d\n", contador);

}