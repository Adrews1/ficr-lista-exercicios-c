#include <stdio.h> 

  

int main() 

{ 

    float centimetro, resultado;
    
    printf("Conversor de centímetros  para polegadas\n");
    
    printf("\ncentímetros : ");
    
    scanf("%f", &centimetro);
    
    resultado = centimetro / 2.54;
    
    printf("Resultado: %.3f", resultado);

    return 0;

}