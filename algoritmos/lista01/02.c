#include<stdio.h>

/*
A Loja Mam�o com A��car est� vendendo seus produtos em 5 (cinco) presta��es sem juros.
Fa�a um algoritmo que receba um valor de uma compra e mostre o valor das presta��es.
*/

main(){
    float compra, prestacao;

    printf("-------------------------------------------\n");
    printf("---------- LOJA MAMAO COM ACUCAR ----------\n");
    printf("---------- 5x sem juros          ----------\n");
    printf("-------------------------------------------\n\n");

    printf("Digite o valor da Compra: ");
    scanf("%f",&compra);

    prestacao = compra/5;

    printf("\nA sua compra ficou em 5x de %.2f \n", prestacao);

    printf("\n-------------------------------------------\n\n");
}
