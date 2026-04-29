/* Questão 6. Faça um algoritmo que recebe o valor do raio de um círculo e apresenta o valor da
área desse círculo.
*/

#include <stdio.h>

int main() {
    float raio, pi, area;
    pi = 3.14159;
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
    area = pi * raio *raio;
    
    printf("O valor do circulo é: %.2f", area);

    return 0;
}