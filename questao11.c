/*Questao 11. Faca um algoritmo que auxiliar a um funcionario de um caixa de supermercado. O
algoritmo devera receber como entrada o valor da compra do cliente e o valor pago pelo cliente,
em seguida o algoritmo devera apresentar o troco da compra, de forma que o mesmo deve
apresentar a quantidade de cedulas e moedas para compor o troco do cliente
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    float total;
    int totalced, troco_cedula;
    totalced = 0;
    troco_cedula = 100; // Começando pela maior possível para garantir o menor número de notas
    printf("============================================\n");
    printf("\t\tMercado\t\t");
    printf("\n============================================\n");
    printf("Valor da compra do cliente R$: ");
    scanf("%f", &total);
    printf("\n");

    while (true) {
        if (total >= troco_cedula) {
            total = total - troco_cedula;
            totalced = totalced + 1;
        } else {
            // Só imprime se realmente usou alguma nota
            if (totalced > 0) {
                printf("Total de %d cedula(s) de R$: %d\n", totalced, troco_cedula);
            }

            // Lógica de troca de cédula
            if (troco_cedula == 100) {
                troco_cedula = 50;
            } else if (troco_cedula == 50) {
                troco_cedula = 20;
            } else if (troco_cedula == 20) {
                troco_cedula = 10;
            } else if (troco_cedula == 10) {
                troco_cedula = 5;
            } else if (troco_cedula == 5) {
                troco_cedula = 2;
            } else {
                // Se chegou aqui, não há mais notas menores que 2
                break;
            }
            
            totalced = 0; // Reseta o contador para a nova nota
        }
    }

    if (total > 0) {
        printf("Troco em moedas R$: %.2f centavos\n", total);
    }

    printf("\n============================================\n");
    return 0;
}