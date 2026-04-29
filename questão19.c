/*Escreva um algoritmo que recebe três valores inteiros e mostre o valor do maior
número digitado pelo usuário.*/
#include <stdio.h>

int main() {
    int maior = 0, valor;

    for (int i = 0; i < 3; i++) {
        printf("Digite um numero: ");
        scanf("%d", &valor);
        if (valor > maior){
            maior = valor;
        }
    }
    printf("O maior valor digitado é %d\n", maior);
    return 0;
}