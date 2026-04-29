/*Faça um algoritmo que recebe um valor inteiro, caso esse numero seja positivo,
mostre o valor digitado, caso seja negativo mostre o valor digitado com o sinal invertido*/

#include <stdio.h>

int main(){
    int num;
    printf("Digite um valor: ");
    scanf("%d", &num);

    if (num >= 0)
    printf("%d", num);
    else
    printf("%d\n", -(num));

}