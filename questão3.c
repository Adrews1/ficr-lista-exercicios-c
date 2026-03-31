#include <stdio.h> 


int main() 

{ 

    int dividendo, divisor, resto; 

    printf("digite dois valores: "); 

    scanf("%d %d", &dividendo, &divisor); 

    resto = dividendo % divisor; 

     

    printf("Quociente: %d\nResto: %d\n", dividendo / divisor, resto); 

    return 0; 

}   