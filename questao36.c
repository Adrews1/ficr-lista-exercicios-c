/*Calcular o valor de S dado pela sequência:
S = 1 + 1/2 + 1/3 + 1/4 ... + 1/10*/
#include <stdio.h>

int main() {
    float s = 0.0;

    for (int i = 1; i <= 10; i++) {
        s += 1.0 / i;
    }
    printf("O valor de S é: %.2f\n", s);
    return 0;
}