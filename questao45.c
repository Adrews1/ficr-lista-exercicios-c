/*Construa um algoritmo que apresente a tabuada de um número N.
O valor de N é fornecido pelo usuário.*/

#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero para ver sua tabuada: ");
    scanf("%d", &n);
    printf("Tabuada de %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    
    return 0;
}