#include <stdio.h>
int main () {
    int numeros [10];
    int i, soma, maior, menor;
    float media;

    for ( i =0 ; i < 10 ; i++) {
        printf("Digite o %d valor inteiro: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    soma = 0;
    maior = numeros[0];
    menor = numeros[0];
    for ( i =0 ; i < 10 ; i++) {
        soma = soma + numeros[i];

        if (numeros[i] > maior) {
            maior = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }

    }
    media = soma / 10.0;
    for ( i =0 ; i < 10 ; i++) {
        if (numeros[i] > media) {
        printf("valores acima da media:%d ", numeros[i]);
        }

    }
    printf("\n");

    printf("A soma é %d\n", soma);
    printf("A media é %.2f\n", media);
    printf("O maior numero é %d\n", maior);
    printf("O menor numero é %d\n", menor);

    return 0;
}