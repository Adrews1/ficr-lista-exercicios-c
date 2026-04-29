/* 
    Ler dois valores para as variaveis A e B, e efetuar as trocas dos valores de forma
que a vari´ avel A passe a possuir o valor da variavel B e a variavel B passe a possuir o valor da
variavel A. Apresentar os valores trocados.
*/

#include <stdio.h>

int main() {

    int primeiro, segundo;

    printf("Digite dois valores: ");

    scanf("%d %d", &primeiro, &segundo);
    
    primeiro = primeiro + segundo;

    segundo = primeiro - segundo;

    primeiro = primeiro - segundo;

    printf("Os valores trocados: %d, %d", primeiro, segundo);

    return 0;
}