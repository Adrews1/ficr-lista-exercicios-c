/* 
    Escreva um algoritmo que recebe o valor do salario fixo e o total de vendas efetuadas
por um vendedor de uma loja durante o mes (em dinheiro). Sabendo que este vendedor ganha
15% de comissao sobre suas vendas efetuadas, informar o salario fixo e salario no final do mes.
*/

#include <stdio.h>

int main() {
    float salario_fixo, vendas, comissao, salario_final; //definindo variaveis
    
    //definindo funções
    printf("Digite o salario R$: ");
    
    scanf("%f", &salario_fixo);
    
    printf("\nDigite a quantidade de vendas em R$: ");
    
    scanf("%f", &vendas);
    
    //calculo
    comissao = vendas * 15.0 /100.0;
    
    salario_final = comissao + salario_fixo;
    
    //resultado
    printf("Salario fixo: R$%.2f\nVendas: R$%.2f\nComissão: R$%.2f\nSalario final: R$%.2f",
    salario_fixo, vendas, comissao, salario_final);
    return 0;
}