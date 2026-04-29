/*Escreva um algoritmo que calcule e mostre
 os 10 primeiros termos da série de fibonacci*/

 #include <stdio.h>

int main() {
    int t1 = 0, t2 = 1, t3, termos;
    printf("Digite o numero de termos da serie de fibonacci: ");
    scanf("%d", &termos);
    for (int i = 1; i <= termos; i++) {
        printf("%d -> ", t1);
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
    }
    printf("FIM\n");

    return 0;
 }