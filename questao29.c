/*Fazer um algoritmo que leia 5 numeros e verifique se ele esta entre 100 e 200. Se estiver na faixa, mostrar ”Voce digitou um numero entre 100 e 200”, se nao estiver na faixa,
mostrar ”Voce digitou um numero fora da faixa entre 100 e 200”*/
#include <stdio.h>

int main() {
    int var;

    for (int i = 1; i <= 5; i++){
        printf("Digite um valor entre 100 e 200: ");
        scanf("%d", &var);
        if (var >= 100 && var <= 200){
            printf("Você digitou um valor entre 100 e 200\n");
        } else{
            printf("Você digitou um valor fora de 100 e 200\n");
        }
    }

    return 0;
}