/*Faça um algoritmo que recebe um valor inteiro e mostra se o valor é zero, positivo
ou negativo.*/
#include <stdio.h>

int main(){
    int num;
    printf("Digite um valor inteiro: ");
    scanf("%d", &num);

    if (num == 0)
        printf("Seu numero é zero: %d", num);
    else if(num > 0){
        printf("Seu numero é positivo: %d", num);
    } else {
        printf("Seu numero é negativo: %d", num);
    }
return 0;
}