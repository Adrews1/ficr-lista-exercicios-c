/*Faça um algoritmo que recebe um valor e mostra se o mesmo é par ou impar*/
#include <stdio.h>

int main(){
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);

    if (valor % 2 == 0){
        printf("Par");
    } else {
        printf("Impar");
    }

    return 0;
}
