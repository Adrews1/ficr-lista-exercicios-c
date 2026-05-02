/*Escreva um algoritmo que leia os valores ds variáveis X e A e calcule o valor de S dado por:
S = 1/A * 20/X + 2/A - 1 * 19/Xelevado a 2 + 3/ A - 2 * 18/X elevado a 3... 20/A - 19 * 1 / X elevado a 20*/

#include <stdio.h>
#include <math.h>
int main() {
    double a, x, s = 0.0;
    printf("Digite o valor de A: ");
    scanf("%lf", &a);
    printf("Digite o valor de X: ");
    scanf("%lf", &x);

    for (int i = 1; i <= 20; i++) {
        s += (i / (a - (i - 1))) * pow((20 - (i - 1)), i) / pow(x, i);
        printf("Iteração %d: S = %.2lf\n", i, s);
    }
    printf("O valor de S é: %.2lf\n", s);
    return 0;
}