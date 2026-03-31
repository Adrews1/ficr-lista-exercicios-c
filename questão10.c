/*Questao 10. Faça um algoritmo que mostra a quantidade de cedulas de um caixa eletronico de
um banco. O algoritmo recebe como entrada o valor inteiro a ser sacado pelo cliente, em seguida
apresente a quantidade de cada cedula que o cliente devera receber, de forma que a quantidade
de cedulas seja o menor possıvel
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    int total, cedulas, totalced;
    
    totalced = 0;
    cedulas = 100; // Começando pela maior possível para garantir o menor número de notas

    printf("============================================\n");
    printf("\t\tBanco FICR\t\t");
    printf("\n============================================\n");
    printf("Quanto voce deseja sacar R$: ");
    scanf("%d", &total);
    printf("\n");

    while (true) {
        if (total >= cedulas) {
            total = total - cedulas;
            totalced = totalced + 1;
        } else {
            // Só imprime se realmente usou alguma nota
            if (totalced > 0) {
                printf("Total de %d cedula(s) de R$: %d\n", totalced, cedulas);
            }

            // Lógica de troca de cédula
            if (cedulas == 100) {
                cedulas = 50;
            } else if (cedulas == 50) {
                cedulas = 20;
            } else if (cedulas == 20) {
                cedulas = 10;
            } else if (cedulas == 10) {
                cedulas = 5;
            } else if (cedulas == 5) {
                cedulas = 2;
            } else {
                // Se chegou aqui, não há mais notas menores que 2
                break;
            }
            
            totalced = 0; // Reseta o contador para a nova nota
        }
    }

    if (total > 0) {
        printf("Restou R$: %d (valor nao sacavel)\n", total);
    }

    printf("\n============================================\n");
    return 0;
}