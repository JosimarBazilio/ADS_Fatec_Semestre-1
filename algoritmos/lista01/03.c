#include<stdio.h>

/*
Construa um algoritmo que solicite o saldo de uma aplicação
e mostre o saldo reajustado, com acréscimo de 7,5%.
*/

main(){
    float saldo, reajustado;

    printf("--------------------------------------\n");
    printf("---------- SALDO REAJUSTADO ----------\n");
    printf("---------- Acrescimo 7,5%%   ----------\n");
    printf("--------------------------------------\n\n");

    printf("Digite o valor do saldo da aplicacao: ");
    scanf("%f",&saldo);

    reajustado = saldo * 1.075;

    printf("\nSaldo reajustado: %.2f \n", reajustado);

    printf("\n--------------------------------------\n\n");
}
