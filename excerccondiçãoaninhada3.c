#include <stdio.h>
#include <time.h>

int main() {

time_t agora;
struct tm * infotempo;
time(&agora);
infotempo  = localtime(&agora);
int anoatual = infotempo ->tm_year + 1900;

    int idadeatual;

    printf("Atualmente estamos no ano de %i.",anoatual);
    printf("\nEm que ano você nasceu: ");
    int nascimento;
    scanf("%i",&nascimento);
    
    idadeatual = anoatual - nascimento;
    
    printf("Sua idade atual é %i. ",idadeatual);

        if (idadeatual<18){
        int faltam;
        faltam = 18 - idadeatual;
        int anoalistamento;
        anoalistamento = anoatual + faltam;
        printf("Seu alistamento será em %i. Ainda faltan %i anos.",anoalistamento,faltam);
        } else if (idadeatual>18){
            int foi;
            foi = idadeatual - 18;
            int anoalistamento;
            anoalistamento = anoatual - foi;
            printf("Seu alistamento foi em %i. Já se passaram %i anos.",anoalistamento,foi);
            } else if (idadeatual==18) {
                printf("Você completa 18 anos exatamente em %i. Vá se alistar",anoatual);
            }
}