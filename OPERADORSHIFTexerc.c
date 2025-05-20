/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()

{   
    
    printf("----------OPERADORES SHIFT-----------\n");
    printf("Digite um número:");
    int numero;
    scanf("%i",&numero);
    printf("Digite o deslocamento:");
    int deslocamento;
    scanf("%i",&deslocamento);
    int resultado1;
    int resultado2;
    
    resultado1 = numero << deslocamento;
    resultado2 = numero >> deslocamento;
    
    printf("\nCalculando o número %i << %i fica igual a %i\n\n",numero,deslocamento,resultado1);
    printf("Calculando o número %i >> %i fica igual a %i",numero,deslocamento,resultado2);

    return 0;
}