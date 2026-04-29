/*Construa um algoritmo que leia um conjunto de 20 números inteiros
 e mostre qual foi o maior valor fornecido*/

 #include <stdio.h>

 int main() {
        int numeros[20];
        int maior;

        for (int i = 0; i < 20; i++) {
                printf("Digite o %dº número: ", i + 1);
                scanf("%d", &numeros[i]);

                if (i == 0 || numeros[i] > maior) {
                        maior = numeros[i];
                }
        }
    printf("O maior número fornecido é: %d\n", maior);
    return 0;
 }