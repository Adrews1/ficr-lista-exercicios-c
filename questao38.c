/*Faça um algoritmo que leia um valor x, calcule e mostre
 os 20 primeiros termos da série:
S = 1 / x - 1 + 1 / x - 2 + 1 / x - 3 +...*/

#include <stdio.h>

int main() {
    float x, s = 0;
    int i;

    printf("Digite um valor para x: ");
    scanf("%f", &x);

    for (i = 1; i <= 20; i++) {
        if (x - i != 0) {
            s += 1 / (x - i);
        }
    }

    printf("O valor da série S é: %.2f\n", s);

    return 0;
}