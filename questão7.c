/*
    Questao 7. Fazer um algoritmo que calcule e mostre a area e o volume de um cilindro.
(A = 2πr(h+r),V = πr2h)

*/

#include <stdio.h>
#define pi 3.14159
int main()
{
    float altura, raio, area, volume;
    printf("Digite o valor da altura e do raio: ");
    
    scanf("%f %f", &altura, &raio);
    
    area = 2 * pi * raio * (altura + raio);
    
    volume = pi * raio * raio * altura;
    
    printf("Area: %.2f\nVolume: %.2f", area, volume);
    return 0;
}