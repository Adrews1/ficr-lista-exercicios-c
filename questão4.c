#include <stdio.h> 

  
int main() 

{ 

    float primeiro, segundo, quociente, produto;  

    printf("digite dois valores: "); 

    scanf("%f %f", &primeiro, &segundo); 

    quociente = primeiro / segundo; 
    
    produto = primeiro * segundo;
    

    printf("A soma entre %.1f e %.1f é %.2f\nProduto: %.2f\nQuociente: %.2f",
    primeiro, segundo, primeiro + segundo, produto, quociente); 

    return 0; 

} 