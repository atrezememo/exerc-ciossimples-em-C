#include <stdio.h>

int main()
{
   printf("--------Digite dois valores--------"); 
   printf("\nDigite o valor 1: ");
   int numero1;
   scanf("%i",&numero1);
   printf("Digite o valor 2: ");
   int numero2;
   scanf("%i",&numero2);
   
   
   printf("\n=======================");
   printf("\n+               Adição");
   printf("\n-            Subtração");
   printf("\n*        Multiplicação");
   printf("\n               Divisão");
   
   printf("\n\nDigite sua opção:");
     char opcao;
     fflush(stdin);
     scanf(" %c",&opcao);
    
   
   switch(opcao) {
       case '+':
       printf("O valor de %i + %i é igual a: %i",numero1,numero2,(numero1+numero2));
       break;
       case '-':
       printf("O valor de %i - %i é igual a: %i",numero1,numero2,(numero1-numero2));
       break;
       case '*':
       printf("O valor de %i * %i é igual a: %i",numero1,numero2,(numero1*numero2));
       break;
       case '/':
       printf("O valor de %i / %i é igual a: %i",numero1,numero2,(numero1/numero2));
       break;
       default:
       printf("Digite novamente, opção incorreta");
       break;
       
       printf("VOLTE SEMPRE!");
   }
  
    
    
}