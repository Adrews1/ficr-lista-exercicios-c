/*Escreva um algoritmo para ler 2 valores inteiros e uma das seguintes operacoes a
serem executadas: 1. Adicao, 2. Subtracao, 3. Divisao e 4. Multiplicacao. Calcular e mostrar o
resultado da operacao.*/
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int primeiro, segundo, escolha;
    do{
    printf("\n1 - Adição\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n0 - Sair\nEscolha: ");
    scanf("%d", &escolha);

    switch(escolha){
        case 1: {
            printf("Digite o primeiro valor: ");
            scanf("%d", &primeiro);
            printf("Digite o segundo valor: ");
            scanf("%d", &segundo);
            printf("%d + %d = %d\n", primeiro, segundo, primeiro + segundo);
            break;
        }
        case 2: {
            printf("Digite o primeiro valor: ");
            scanf("%d", &primeiro);
            printf("Digite o segundo valor: ");
            scanf("%d", &segundo);
            printf("%d - %d = %d\n", primeiro, segundo, primeiro - segundo);
            break;
        }
        case 3: {
            printf("Digite o primeiro valor: ");
            scanf("%d", &primeiro);
            printf("Digite o segundo valor: ");
            scanf("%d", &segundo);
            printf("%d * %d = %d\n", primeiro, segundo, primeiro * segundo);
            break;
        }
        case 4: {
            printf("Digite o primeiro valor: ");
            scanf("%d", &primeiro);
            printf("Digite o segundo valor: ");
            scanf("%d", &segundo);
            if (segundo == 0){ //teste pois não existe divisão por zero
                printf("\nNão é possivel dividir por zero!");
                do{
                    printf("\nDigite um valor maior que zero: ");
                    scanf("%d", &segundo);
                } while(segundo == 0); } // loop caso fiquem repetindo zero
            printf("%d / %d = %.2f\n", primeiro, segundo, (float)primeiro / segundo);
            break;
        }
        case 0: {
            printf("Saindo...");
            break;
        }
        default:{
            printf("Digite um valor valido.");
        }
  }
    } while(escolha != 0); 

    return 0;
}