/*As maças custam R$0.30 cada, se forem compradas menos do que uma dúzia, e
R$0.25 se forem compradas pelo menos doze. Escreva um algoritmo que leia o número de maças
compradas, calcule e mostre o valor total da compra.*/
#include <stdio.h>

int main() {
    int quantidade;
    float valor;
    do {
    printf("Quantas maças deseja comprar?: ");
    scanf("%d", &quantidade);
    }while (quantidade <= 0);
    if (quantidade >= 12){
        valor = quantidade * 0.25;
    printf("%d maças vão custar R$ 0.25 centavos a unidade.\nTotal R$ %.2f", quantidade, valor);
    } else {
        valor = quantidade * 0.30;
        printf("%d maças vão custar R$ 0.30 centavos a unidade.\nTotal R$ %.2f\n", quantidade, valor);

    }
    return 0;
}