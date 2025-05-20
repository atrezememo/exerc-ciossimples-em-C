#include <stdio.h>

int main()

{
    printf("======== INVERSO OU OPOSTO ==========\n");
    printf("Digite um número:");
    int numero;
    scanf("%i",&numero);
    
    float resultado;
    
    if (numero>0) {
    resultado = 1.0/numero;
    printf("\nO inverso de %i é igual a %.1f\n",numero,resultado);
    } else {
    resultado = numero * -1;
        printf("\nO oposto de %i é igual a %.1f",numero,resultado);
    }
    
}