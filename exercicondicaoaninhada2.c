#include <stdio.h>

int main()
{
    printf("\n========Preço por Época=======");
    
    printf("\nDigite o valor gasto na loja: ");
    float valorgasto;
    scanf("%f",&valorgasto);
    
    printf("\nESCOLHA UMA ÉPOCA");
    printf("\n=================");
    printf("\n1 Carnaval [+10]");
    printf("\n2 Férias Escolares [+20]");
    printf("\n3 Dia das Crianças [+5]");
    printf("\n4 Black Friday [-30]");
    printf("\n5 Natal [-5]");
    printf("\n========================");
    
    printf("\nDigite sua opção: ");
    int opcao;
    scanf("%i",&opcao);
    
    switch(opcao) {
        case 1:
        printf("\nNo Carnaval o valor pago será de:%.2f",valorgasto*0.10+valorgasto);
        break;
        case 2:
        printf("\n Nas Férias Escolares o valor pago será de%.2f",valorgasto*0.20+valorgasto);
        break;
        case 3:
        printf("\n No dia das crianças o valor será de: %.2f",valorgasto*0.05+valorgasto);
        break;
        case 4:
        printf("\n Na Black Friday o valor será de: %.2f",valorgasto-valorgasto*0.30);
        break;
        case 5:
        printf("\n No natal o valor será de: %.2f",valorgasto-valorgasto*0.05);
        break;
        default:
        printf("\nEm outras datas o valor permanece o mesmo");
    }
    
    
    
}