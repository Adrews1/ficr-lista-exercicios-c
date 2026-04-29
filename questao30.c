/*Escreva um algoritmo que leia a idade de 10 pessoas, calcule e mostre a quantidade
de pessoas maiores de idade.*/
#include <stdio.h>

int main() {
    int var, maioridade = 0;

    for (int i = 1; i <= 10; i++){
        printf("Digite a idade: ");
        scanf("%d", &var);
        if (var >= 18){
            maioridade += 1;
        }

    }
    printf("A quantidade de pessoas maiores de idade é %d\n", maioridade);
    return 0;
}