/*Construa um algoritmo que calcule e apresente
o total da compra realizada pelo cliente em uma loja.
São fornecidos para o algoritmo, o preço da etiqueta (PE)
de cada um dos produtos comprados e, com a compra encerrada (PE = 0),
a condição de pagamento escolhida pelo cliente(CP). Utilize para os cálculos
a tabela de condições de pagamento a seguir:
Tabela 2: condição de pagamento de cada código.
Codigo da condição de pagamento             Condição de pagamento
            1                               A vista em dinheiro ou cheque, com 10% de desconto
            2                               A vista com cartão de credito, com 5% de desconto
            3                               Em 2 vezes, preço de etiqueta sem acréscimo 
            4                               Em 3 vezes, preço de etiqueta com acréscimo de 10%
*/

#include <stdio.h>

int main() {
    float precoEtiqueta, totalCompra = 0;
    int condicaoPagamento;

    printf("Digite o preço da etiqueta (0 para encerrar): ");
    scanf("%f", &precoEtiqueta);

    while (precoEtiqueta != 0) {
        totalCompra += precoEtiqueta;
        printf("Digite o preço da etiqueta (0 para encerrar): ");
        scanf("%f", &precoEtiqueta);
    }

    printf("Digite a condição de pagamento (1-4): ");
    scanf("%d", &condicaoPagamento);

    switch (condicaoPagamento) {
        case 1:
            totalCompra *= 0.9; // 10% de desconto
            break;
        case 2:
            totalCompra *= 0.95; // 5% de desconto
            break;
        case 3:
            // Sem acréscimo
            break;
        case 4:
            totalCompra *= 1.1; // 10% de acréscimo
            break;
        default:
            printf("Condição de pagamento inválida.\n");
            return 1;
    }

    printf("Total da compra: R$ %.2f\n", totalCompra);

    return 0;
}