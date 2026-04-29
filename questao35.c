/*Construa um algoritmo que calcule e mostre o valor de h, sendo h calculado por.
h = 1 + 2 + 3 + 4 + ... + N*/
#include <stdio.h>

int main() {
    int n, h = 0;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        h += i;
    }

    printf("O valor de H é: %d\n", h);

    return 0;
}