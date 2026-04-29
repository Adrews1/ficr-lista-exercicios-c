/*Fazer um algoritmo que calcule e mostre a soma dos cem primeiros numeros inteiros.*/
#include <stdio.h>

int main() {
    int soma = 0;
    for (int i = 1; i <= 100; i++)
        soma += i;
    printf("A soma dos 100 primeiros numeros é: %d", soma);
    return 0;
}