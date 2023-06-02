#include <stdio.h>
#include <stdlib.h>

#define SUCESSO 0

void Tempoexprimento(int sec){

    int horas = (sec/3600);
    int minutos = ((sec % 3600)/ 3600);
    int segundos = ((sec % 3600)% 3600);

    printf("A quantidade total de horas eh: %ih %im %is\n", horas,minutos,segundos);
    
}
 int main(int argc, char** argv){
    int horas,minutos,segundos;

    printf("\nDigite a quantidade de segundos:");

    scanf("%i", &segundos);
    Tempoexprimento(segundos);
    

    return SUCESSO;
}