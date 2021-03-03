#include<stdio.h>

/*
Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual,
calcule e mostre: A idade dessa pessoa; E quantos anos ela terá em 2028.
*/

main(){
    int nascimento, atual, idade, futuro;

    printf("-------------------------------\n");
    printf("---------- SUA IDADE ----------\n");
    printf("-------------------------------\n\n");

    printf("Que ano voce nasceu: ");
    scanf("%i",&nascimento);
    printf("Que ano estamos: ");
    scanf("%i",&atual);

    idade = atual - nascimento;
    futuro = 2028 - nascimento;

    printf("\nSua idade este ano: %i\n", idade);
    printf("\nSua idade em 2028 sera: %i\n", futuro);

    printf("\n-------------------------------\n\n");
}
