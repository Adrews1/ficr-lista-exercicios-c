/*Escreva um algoritmo que leia o valor de K e N.
Calcule e mostre o valor de K elevado a N*/
#include <stdio.h>

int main() {
    int k, n, resultado = 1;



    printf("Digite o valor de k: ");

    scanf("%d", &k);

    printf("Digite o valor de n: ");

    scanf("%d", &n);

    for (int i = 0; i < n; i++){

        resultado *= k;
    }

    printf("O resultado é: %d\n", resultado);
    return 0;
}