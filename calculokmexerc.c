#include <stdio.h>

int main()

{
    printf("======== TABELA DE PREÇOS ==========\n");
    printf("Viagens até 200 km      R$0.50/km\n");
    printf("A partir de 200 km      R$0.35/km\n");
    printf("------------------------------------\n");
    
    printf("Distância total da viagem em KM: ");
    float distanciatotal;
    scanf("%f",&distanciatotal);
    
    float km1 = 0.50;
    float km2 = 0.35;
    float custo;
    
    if (distanciatotal<=0) {
        printf("Distância INVÁLIDA!");
        return 1;
    }
    
    if (distanciatotal<=200) {
        custo = km1* distanciatotal;
        
        printf("Uma viagem de %.2f KM vai custar R$%.2f/km\n\n",distanciatotal,km1);
        printf("Valor total: %.2f\n",custo);
        
    } else{
    custo = km2 * distanciatotal;
        printf("Uma viagem de %.2f KM vai custar R$%.2f/km\n\n",distanciatotal,km2); 
        printf("Valor total: %.2f",custo);
    }
        
    

}