#include <stdio.h>

int main()
{
    
    int num;
    num = 0;
    int valor;
    int total = 0;
    
    printf("Digite um número:\n");
    
    while (num<5) {
        int valor;
        scanf("%i",&valor);
        num++;
        if (valor==20){
        total = total+1;
    }
}
printf("O total de números 20 é: %i",total);
}