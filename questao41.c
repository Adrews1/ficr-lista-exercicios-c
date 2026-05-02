/*Escreva um programa que calcule as n primeiras potências do número k.
para n = 3 e k = 2 teremos:
2 elevado a 1 - 2
2 elevado a 2 = 4
2 elevado a 3 = 8*/

#include <stdio.h>

int main() {
    int n, k, resultado = 1;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    printf("Digite o valor de k: ");
    scanf("%d", &k);

    for (int i = 1; i <= n; i++) {
        resultado *= k;
        printf("%d elevado a %d = %d\n", k, i, resultado);
    }
    return 0;
}