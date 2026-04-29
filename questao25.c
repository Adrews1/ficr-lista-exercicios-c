/*faça um algoritmo que mostre os numeros pares compreendidos entre 14 e 30 (inclusive).*/
#include <stdio.h>

int main() {
    for (int i = 14; i <= 30; i++){
        if ( i % 2 == 0) {
            printf("%i \n", i);
        }
    }
    return 0;
}