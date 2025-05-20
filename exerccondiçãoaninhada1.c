#include <stdio.h>
#include <time.h>

int main()
{
    printf("Digite um número e eu direi se ele é POSITIVO, NEGATIVO OU NULO.\n");
    printf("=================================================================\n");
    
    printf("Digite um número:");
    int numero;
    scanf("%i",&numero);
    
    if (numero>0) {
    printf("\nO número é POSITIVO");
    } else if (numero<0) {
        printf("\nO número é NEGATIVO");
        } else if (numero==0){
            printf("\nO número é NULO");
        }
}