/*Calcular e mostrar a média aritmética
 dos números pares compreendidos entre 13 e 73*/

 #include <stdio.h>

 int main () {
        int cont = 0;
        float media;

        for (int i = 13; i <= 73; i++) {
            if (i % 2 == 0) {
                media += i;
                cont++;
            }
        }
    printf("A media aritmetica dos numeros pares entre 13 e 73 e: %.2f\n", media / cont);
    return 0;
}