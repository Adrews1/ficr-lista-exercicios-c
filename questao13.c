/*
    Questao 13. O preco de um automovel e calculado pela soma do preço de fabrica, o preco dos
impostos (45% do preço de fabrica) e a porcentagem do revendedor (28% do prec¸o de fabrica).
Fazer um algoritmo que leia o preço de fabrica. Calcule e mostre o preço final do carro
*/

#include <stdio.h>

int main() {
    float automovel,fabrica, pimposto, prevendedor;
    
    printf("Digite o preço de fabrica do automovel R$: ");
    scanf("%f", &fabrica);
    
    pimposto = fabrica * 0.45;
    prevendedor = fabrica * 0.28;
    automovel = fabrica + pimposto + prevendedor;
    
    printf("O valor do carro é R$: %.2f", automovel);
    return 0;
}