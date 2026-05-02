/*Tem-se um conjunto de dados contendo a altura e o sexo (M ou F) de 15 pessoas.
Faça um programa que calcule e mostre:
a) a maior e a menor altura do grupo;
b) a media de altura das mulheres;
c) o numero de homens.*/

#include <stdio.h>

int main() {
    char sexo[15];
    float altura[15];
    float maior = 0, menor = 999;
    float somaMulheres = 0;
    int contMulheres = 0, contHomens = 0;

    for (int i = 0; i < 15; i++) {
        printf("Digite o sexo (M/F) da pessoa %d: ", i + 1);
        scanf("%s", sexo);
        printf("Digite a altura da pessoa %d: ", i + 1);
        scanf("%f", &altura[i]);

        if (altura[i] > maior) maior = altura[i];
        if (altura[i] < menor) menor = altura[i];

        if (sexo[0] == 'M' || sexo[0] == 'm') {
            contHomens++;
        } else if (sexo[0] == 'F' || sexo[0] == 'f') {
            somaMulheres += altura[i];
            contMulheres++;
        }
    }

    printf("\nMaior altura: %.2f\n", maior);
    printf("Menor altura: %.2f\n", menor);
    if (contMulheres > 0) {
        printf("Media de altura das mulheres: %.2f\n", somaMulheres / contMulheres);
    } else {
        printf("Nenhuma mulher cadastrada.\n");
    }
    printf("Numero de homens: %d\n", contHomens);

    return 0;
}