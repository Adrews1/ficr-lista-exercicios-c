/*Tendo como entrada a altura(h) e o sexo(1:f e 2:m)
de uma pessoa, construa um algoritmo que calcule
e mostre o seu peso ideal, calculado da seguinte maneira:
homens: 72.7 *h-58
mulheres: 62.1 *h-44.7 */

#include <stdio.h>

int main() {
    float h, peso_ideal;
    int sexo;

    printf("Digite a altura (em metros): ");
    scanf("%f", &h);

    printf("Digite o sexo (1 para feminino, 2 para masculino): ");
    scanf("%d", &sexo);

    if (sexo == 1) {
        peso_ideal = 62.1 * h - 44.7;
        printf("O peso ideal para mulheres com altura %.2f m é: %.2f kg\n", h, peso_ideal);
    } else if (sexo == 2) {
        peso_ideal = 72.7 * h - 58;
        printf("O peso ideal para homens com altura %.2f m é: %.2f kg\n", h, peso_ideal);
    } else {
        printf("Sexo invalido. Por favor, digite 1 para feminino ou 2 para masculino.\n");
    }

    return 0;
}