#include<stdio.h>

/*
Em �pocas de pouco dinheiro, os comerciantes est�o procurando aumentar suas vendas oferecendo desconto.
Fa�a um algoritmo que receba o valor de um produto e que escreva o novo valor tendo em vista que o desconto foi de 9%.
*/

main(){
    float compra, total;

    printf("-----------------------------------------\n");
    printf("---------- COMPRA COM DESCONTO ----------\n");
    printf("---------- 9%% na compra        ----------\n");
    printf("-----------------------------------------\n\n");

    printf("Digite a valor da compra: ");
    scanf("%f",&compra);

    total = compra - compra * 0.09;

    printf("\nValor com desconto: %.2f reais\n", total);
    printf("\n-----------------------------------------\n\n");
}
