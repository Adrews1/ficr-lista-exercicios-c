/*Calcular o valor de S dado pela sequência:
S = 1 3/2 + 5/3 + 7/4 + ... + 99/50*/
#include <stdio.h>


int main() {
    float s = 1.0, cont = 1.0;

    for (int i = 3; i <= 99; i += 2) {
        cont += 1.0;
        s += i / cont;
    }
    printf("O valor de S é: %.2f\n", s);
    return 0;
}