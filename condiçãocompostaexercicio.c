#include <stdio.h>
#include <time.h>


int main(){  
    
time_t t;
time(&t);
struct tm *data;
data  = localtime(&t);
int year = data-> tm_year;

int ano;

ano = year + 1900;
printf("Atualmente estamos no ano de %i\n\n", ano);

printf("Em que ano você nasceu? ");
int nascimento;
scanf("%i",&nascimento);
int idade;

idade = ano - nascimento;

    if (idade>=18){
        printf("Sua idade atual é %i\n",idade);
        printf("Você já fez %i anos. Espero sinceramente que você tenha se alistado\n",idade);
    } else{
        printf("Sua idade atual é %i\n",idade);
        printf("Você ainda não tem 18 anos. Não pode se alistar");
    }
    
}
