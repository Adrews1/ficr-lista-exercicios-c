/*Faça um algoritmo para calcular n! (fatorial de um número n),
 sendo que o valor de n é fornecido pelo usuário. Sabe-se que:
 n! = 1 * 2 * 3 * ... * (n - 1) * n
 0! = 1, por definição*/

#include <stdio.h>

int main() {
    int n, fatorial = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Fatorial nao definido para numeros negativos.\n");
    } else {
        for (int i = n; i >= 1; i--) {
            fatorial *= i;
            printf("Fatorial intermediario para %d: %d\n", i, fatorial);
        }
        printf("%d! = %d\n", n, fatorial);
    }

    return 0;
}