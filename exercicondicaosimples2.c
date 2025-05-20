#include <stdio.h>
#include <time.h>

int main(){   
time_t t;
time(&t);
struct tm *data;
data  = localtime(&t);
int year = data-> tm_year;
    
printf("Em que ano você nasceu? ");
int nascimento;
scanf("%i",&nascimento);
printf("------------------------------\n");

int idadeatual;
year = year + 1900;
idadeatual = year - nascimento;

printf("Você tem %i anos, certo?\n",idadeatual);
printf("Seja bem-vinde ao Banco Estudonauta!\n\n");

 if (idadeatual>=75) {
     printf("=== ATENÇÃO! DIRIJA-SE AO CAIXA PREFERENCIAL ===");
 }
    return 0;
}