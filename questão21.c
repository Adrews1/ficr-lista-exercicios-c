/*Escrever um algoritmo que leia três valores inteiros e verifique se eles podem ser os
lados de um triângulo. Se forem, informar qual o tipo de triângulo que eles formam: equilátero,
isóscele ou escaleno.*/
#include <stdio.h>

int main()
{
    int primeiro, segundo, terceiro;

    printf("Digite três valores do triangulo: ");
    scanf("%d%d%d", &primeiro, &segundo, &terceiro);

    if ((primeiro + segundo > terceiro) && (segundo + terceiro > primeiro) && (terceiro + primeiro > segundo))
        {
            if (primeiro == segundo && segundo == terceiro)
            {
                printf("Triângulo Equilátero");
            } else if (primeiro == segundo || segundo == terceiro || terceiro == primeiro)
            {
                printf("Triângulo Isóscele");
            } else {
                printf("Triângulo Escaleno");
            }
        } else {
            printf("Digite valores validos.");
        }
    return 0;
}