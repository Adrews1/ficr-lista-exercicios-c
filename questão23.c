#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, delta, x1, x2;

    printf("Digite o valor de A: ");
    scanf("%f", &a);
    if (a == 0){
        printf("O coeficiente A deve ser diferente de zero.\n");
        return 1;
    }

    printf("Digite o valor de B: ");
    scanf("%f", &b);

    printf("Digite o valor de C: ");
    scanf("%f", &c);

    delta = (b * b) - (4 * a * c);

    if (delta < 0){
        printf("Nao existem raizes reais, pois o Delta e negativo (%.2f)\n", delta);
    } else if (delta == 0){
        x1 = -b / (2 * a);
        printf("Delta = 0, duas raizes iguais: x1 = x2 = %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Resultado x1 = %.2f\nResultado x2 = %.2f\n", x1, x2);
    }
    return 0;
}