#include <stdio.h>

int main()

{   
    
printf("Qual foi o valor das compras? R$");
float valortotal;
scanf("%f",&valortotal);
printf("-------------------------------------\n");
printf("Você comprou R$%.2f, na nossa loja!\n\n",valortotal);
    if (valortotal>=500){
        printf("================================ATENÇÃO====================================\n");
        
        float desconto = 150;
        float valorfinal;
        valorfinal = valortotal - desconto; 
        
        printf("Por fazer mais de R$%.2f em compras você vai receber R$%.2f de desconto\n",valortotal,desconto);
        printf("O valor a ser pago é de %.2f! Volte Sempre!",valorfinal);
        
        
        
    }


    
    
    





    return 0;
}