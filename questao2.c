#include <stdio.h> 

  

int main() 

{ 

    int valor; 

    printf("digite um valor: "); 

    scanf("%d", &valor); 

    printf("o valor é: %d\nO antecessor é: %d\n o sucessor é: %d", valor, valor - 1, valor + 1); 

    return 0; 

}    