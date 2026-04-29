/*A conversão de graus fohrenheit para celsius é obtida por c = 5/9*(f - 32).
 faça um algoritmo que calcule e escreva uma tabela de graus celsius em graus fahrenheit,
 cujos graus variem de 50 a 65 de 1 em 1.*/
#include <stdio.h>

int main() {
    float c, f;
    printf("Celsius\tFahrenheit\n");
    for (c = 50; c <= 65; c++) {
        f = (9.0 / 5.0) * c + 32; // Convertendo Celsius para Fahrenheit
        printf("%.1f\t%.1f\n", c, f); // Imprimindo a tabela
    } 
return 0;
}