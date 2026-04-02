
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
int main() {
    float n1,n2,n3, media;
    printf("digite a sua nota 1: ");
    scanf("%f", &n1);
    printf("digite a sua nota 2: ");
    scanf("%f", &n2);
    printf("digite a sua nota 3: ");
    scanf("%f", &n3);
    media = (n1+n2+n3) / 3.0;
    printf("media: %.2f\n", media);
    if (media >= 7.0) {
        printf("Aprovado\n");
    }else if (media >= 5.0) {
        printf("Recuperação\n");
    }else {
        printf("Reprovado\n");
    }

    return 0;


}
