#include <stdio.h>

int main(){
   
   float v[5];
    float soma = 0;
    int i = 0;
    
    printf("============Mercadinho da Ana===========\n");
    printf("Qual o valor dos itens?\n\n");
    
    for (i=0;i<5;i++) {
        printf("R$ ");
        scanf("%f",&v[i]);
    soma += v[i];
    }
    printf("\n=================================================\n");
    printf("O valor total da compra foi de R$: %.2f centavos",soma);
}