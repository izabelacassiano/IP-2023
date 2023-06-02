
#include <stdio.h>
#include <stdlib.h>

#define SUCEESSO 0 

float soma( float n1,float n2){
    return(n1+n2);
}
float produto( float n1,float n2){
    return(n1*n2);
}
float quociente( float n1,float n2){
    return(n1/n2);
}

int main(int argc, char** argv){
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

        default:} 


    }
    return SUCEESSO;

}
