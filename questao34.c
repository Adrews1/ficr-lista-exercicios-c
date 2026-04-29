/*Ler 10 valores, um de cada vez,
 e contar quantos deles estão no intervalo [10..50]
 e quantos deles estão fora deste intervalo. Mostrar as quantidades calculadas.*/

#include <stdio.h>

int main () {
    int contdentro = 0, contfora = 0, valor;
    for (int i = 0; i < 10; i++) {
        printf("Digite um valor: ");
        scanf("%d", &valor);
        if (valor >= 10 && valor <= 50) {
            contdentro++;
        } else {
            contfora++;
        }
    }
    printf("Quantidade de valores dentro do intervalo [10..50]: %d\n", contdentro);
    printf("Quantidade de valores fora do intervalo [10..50]: %d\n", contfora);
    return 0;
}