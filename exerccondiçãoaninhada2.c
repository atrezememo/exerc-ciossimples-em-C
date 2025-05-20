#include <stdio.h>

int main()
{
    printf("Escreva dois números e eu colocarei em ordem crescente\n");
    
    
    printf("\nDigite o primeiro valor: ");
    int primeirovalor;
    scanf("%i",&primeirovalor);
    
    printf("Digite o segundo valor: ");
    int segundovalor;
    scanf("%i",&segundovalor);
    
        if (primeirovalor>segundovalor) {
            printf("\n%i, %i",segundovalor,primeirovalor);
           } else if (segundovalor>primeirovalor) {
                printf("\n%i,%i",primeirovalor,segundovalor);
               } else {
                    printf("\nOs valores são iguais");
                }
}