#include <ctype.h>
#include <stdio.h>

int main() {
    char opcao;
    float consumo, vfornecimento, vpagar, tarifa, icms;
    
    printf("Digite a sua classe consumidora(a, b, c): ");
    scanf(" %c", &opcao);
    opcao = tolower(opcao);
    printf("Digite o Consumo(em KWh): ");
    scanf(" %f", &consumo);
    switch (opcao){
        case 'a':{
            tarifa = 0.5;
            break;
        }
        case 'b':{
            tarifa = 0.8;
            break;
        }
        case 'c': {
            tarifa = 1.0;
            break;
        }
        default: {
            printf("Digite uma classe consumidora valida!");
            return 1;
        }
    }
    vfornecimento = consumo * tarifa;
    icms = vfornecimento * 0.3;
    vpagar = vfornecimento + icms;
    printf("O valor a ser pago é R$: %.2f\n", vpagar);
    return 0;
}