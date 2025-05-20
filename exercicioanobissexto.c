#include <stdio.h>
#include <time.h>


int main(){  
    
time_t t;
time(&t);
struct tm *data;
data  = localtime(&t);
int year = data-> tm_year;

printf("Digite um ano qualquer:");
int anoqualquer;
scanf("%i",&anoqualquer);

if (anoqualquer%4==0 && anoqualquer%400==0){
   printf("O ano %i é BISSEXTO",anoqualquer); 
    
} else {
        printf("O ano %i não é BISSEXTO",anoqualquer);
     }
    
}
