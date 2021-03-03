#include<stdio.h>

/*
Faça um algoritmo que calcule o valor em reais,
correspondente aos dólares que um turista possui no cofre do hotel.
O programa deve solicitar os seguintes dados:
Quantidade de dólares guardados no cofre e cotação do dólar naquele dia.
*/

main(){
    float dolar,cotacao,real;

    printf("-------------------------------------\n");
    printf("---------- DOLAR PARA REAL ----------\n");
    printf("-------------------------------------\n\n");

    printf("Digite a quantidade de dolares no cofre: ");
    scanf("%f",&dolar);
    printf("Digite a cotacao do dolar de hoje: ");
    scanf("%f",&cotacao);

    real = dolar * cotacao;

    printf("\nO turista possui: %.2f reais\n", real);

    printf("\n-------------------------------------\n\n");
}
