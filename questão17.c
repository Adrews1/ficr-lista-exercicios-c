/* Faça um algoritmo que leia dois numeros e identifique se sao iguais ou diferentes.
Caso eles sejam iguais, mostre uma mensagem dizendo que eles são iguais. Caso sejam diferentes,
informe qual número é o maior, e uma mensagem que são diferentes.*/
#include <stdio.h>

int main() {
    int primeiro, segundo;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &primeiro, &segundo);
    if (primeiro != segundo)
    {
        if (primeiro > segundo){
        printf("%d > %d", primeiro, segundo);
        printf("\nOs dois numeros são diferentes\n");
        } else {
        printf("%d > %d", segundo, primeiro);}
        printf("\nOs dois numeros são diferentes\n");
    } else {
        printf("Os dois numeros são iguais\n");
    }

    return 0;
}