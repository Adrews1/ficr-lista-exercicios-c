/*Questao 12. Fazer um algoritmo que calcule a media aritmetica dos numeros 7, 8 e 9 e a media
nos numeros 4, 5 e 6. Mostre a soma das duas medias e a media das medias.
*/

#include <stdio.h>


int main() {
    float media, media2, soma, media_media;
    media = (7 + 8 + 9) / 3;
    media2 = (4 + 5 + 6) / 3;
    soma = media + media2;
    media_media = soma / 2;
    
    printf("Media de 7, 8 e 9: %.2f\n", media);
    printf("Media de 4, 5 e 6: %.2f\n", media2);
    printf("Soma das duas medias: %.2f\n", soma);
    printf("Media das medias: %.2f\n", media_media);
    
    return 0;
}