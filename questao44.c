/*Construa um algoritmo que leia vários números inteiros e positivos,
calculando ao final da sequência a soma e a média desses números.
A sequência termina quando o usuário digitar um valor negativo.*/

#include <stdio.h>

int main() {
    int valores = 0, soma = 0, contador = 0;
    float media;
    while (valores >= 0) {
        printf("Digite um valor inteiro (numero negativo para sair ex.: -1): ");
        scanf("%d", &valores);
        if (valores >= 0) {
            soma += valores;
            contador++;
        }
    }
    if (contador > 0 && soma > 0) {
        media = (float)soma / contador;
        printf("A media dos valores digitados e: %.2f\n", media);
    } else {
        printf("Nenhum valor maior que zero foi digitado.\n");
    }
    return 0;
} 
