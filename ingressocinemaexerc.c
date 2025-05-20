#include <stdio.h>
#include <time.h>

int main()

{
    
time_t agora;
struct tm * info_tempo;
time(&agora);
info_tempo  = localtime(&agora);
int horas = (info_tempo ->tm_hour - 3 + 24) % 24;
int minutos = info_tempo -> tm_min;
    printf("================= CINEMA ESTUDONAUTA =================\n");
    printf("Horário do filme: 19 H - Preço do Ingresso: R$ 20,00\n");
    
    printf("Quanto dinheiro você tem? R$");
    float dinheiro;
    scanf("%f",&dinheiro);
    
    if (horas<=19 && dinheiro>=20) {
        printf("\nAgora são %02d:%02d H e você consegue comprar o ingresso",horas,minutos);
        
    } else {
        printf("Você não consegue comprar o ingresso, saldo insuficiente ou fora do horário");
    }
    
}