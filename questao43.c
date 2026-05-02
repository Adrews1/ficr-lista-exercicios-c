/*Um determinado material radioativo perde metade de sua massa a cada 50 segun
dos. Dada a massa inicial, em gramas, fazer um programa que determine o tempo necessario
para que essa massa se torne menor do que 0.5 gramas. Escrever a massa inicial, a massa final
e o tempo calculado em segundos. */


#include <stdio.h>
int main() {
    float massa_inicial, massa_final;
    int tempo = 0;

    printf("Digite a massa inicial em gramas: ");
    scanf("%f", &massa_inicial);

    massa_final = massa_inicial;

    while (massa_final >= 0.5) {
        massa_final /= 2; // Perde metade da massa
        tempo += 50; // Incrementa o tempo em 50 segundos
    }

    printf("Massa inicial: %.2f gramas\n", massa_inicial);
    printf("Massa final: %.2f gramas\n", massa_final);
    printf("Tempo necessário: %d segundos\n", tempo);
    
    return 0;
}