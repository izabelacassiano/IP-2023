#include <stdio.h>
#include <math.h>
#include <string.h>

#define SUCESSO 0

float soma( float n1,float n2){
    return(n1+n2);
}
float produto( float n1,float n2){
    return(n1*n2);
}
float quociente( float n1,float n2){
    return(n1/n2);
}

int idade(int anos, int meses, int dias){
    int diastot = ((anos * 365)+(meses * 30)+(dias));

    return (diastot);
}

void Tempoexprimento(int sec){

    int horas = (sec/3600);
    int minutos = ((sec % 3600)/ 3600);
    int segundos = ((sec % 3600)% 3600);

    printf("A quantidade total de horas eh: %ih %im %is\n", horas,minutos,segundos);
    
}

int main(int argc, char** argv) {
    int opcaoExercicio;

    do{
        
    printf("\nDigite o numero de 1 a 8 do exercicio que deeseja executar:");
    printf("\nDigite 0 para sair.");
    printf("\nOpcao:");
    scanf("%i", &opcaoExercicio);

    switch (opcaoExercicio){
    
    case 1:

        float n1,n2,totsoma,totproduto,totquociente;
        int contador=1,opcao;

        while ( contador !=0 )
        {
            printf("\n1-Soma");
            printf("\n2-Produto");
            printf("\n3-Quociente");
            printf("\n0-Sair");
            printf("\nEscolha a opcao desejada: ");
            scanf( "%i",&opcao);

            switch (opcao)
            {
            case 1: 
                printf("\nDigite os dois numeros a serem somados:");
                printf("\nNumero 1:");
                scanf("%f", &n1);
                printf("\nNumero 2:");
                scanf("%f", &n2);
                
                totsoma = soma(n1,n2);
                printf("\nResultado=%f", totsoma);

                break;
            
            case 2: 
                printf("\nDigite os dois numeros a serem multiplicados:");
                printf("\nNumero 1:");
                scanf("%f", &n1);
                printf("\nNumero 2:");
                scanf("%f", &n2);
                
                totproduto = produto(n1,n2);
                printf("\nResultado=%f", totproduto);

                break;

            case 3: 
                printf("\nDigite os dois numeros a serem divididos:");
                printf("\nNumero 1:");
                scanf("%f", &n1);
                printf("\nNumero 2:");
                scanf("%f", &n2);
                
                totquociente = quociente(n1,n2);
                printf("\nResultado=%f", totquociente);

                break;

            case 0:
                contador=0;
                break;

            default:
            printf("Escolha de 0 a 3");
            break;
            }
        } 

    case 2:
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

        break;
    case 3:
        int horas,minutos,segundos;

        printf("\nDigite a quantidade de segundos:");

        scanf("%i", &segundos);
        Tempoexprimento(segundos);
        break;  
    case 0:
        opcaoExercicio = 0;
    break;
    default:
        printf("Escolha uma opcao de 1 a 8.");
        break;
    }
    
    while ( opcaoExercicio = !0);
    return SUCESSO;
}
}