#include <stdio.h>
#include <stdlib.h>

#define SUCESSO 0

int idade(int anos, int meses, int dias){
    int diastot = ((anos * 365)+(meses * 30)+(dias));

    return (diastot);
}

int main(int argc, char** argv){
    int anos,meses,dias,diastotais;

    printf("\nDigite a quantidade de anos, meses e dias da sua idade:");

    printf("\nAnos:");
    scanf("%i", &anos);

    printf("\nMeses:");
    scanf("%i", &meses);
      
    printf("\nDias:");
    scanf("%i", &dias);

    diastotais= idade(anos,meses,dias);
    
    printf("Dias totais: %i\n",diastotais);

    return SUCESSO;
}
