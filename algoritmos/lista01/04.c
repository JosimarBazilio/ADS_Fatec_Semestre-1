#include<stdio.h>

/*
Fa�a um algoritmo que calcule o valor em reais,
correspondente aos d�lares que um turista possui no cofre do hotel.
O programa deve solicitar os seguintes dados:
Quantidade de d�lares guardados no cofre e cota��o do d�lar naquele dia.
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
