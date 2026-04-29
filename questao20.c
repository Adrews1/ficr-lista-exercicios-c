/*Escrever um algoritmo que leia três valores inteiros distintos e os escreva em ordem
crescente*/
#include <stdio.h>

int main()
{
    int num, num2, num3, troca;
    printf("Digite três valores: ");
    scanf("%d%d%d", &num, &num2, &num3);

    if (num > num2){
        troca = num2;
        num2 = num;
        num = troca;
    }
    if (num2 > num3){
        troca = num3;
        num3 = num2;
        num2 = troca;
    }
    if (num > num2){
        troca = num2;
        num2 = num;
        num = troca;
    }
    printf("%d %d %d\n", num, num2, num3);
    return 0;
}