#include<stdio.h>

/*
Desenvolva um algoritmo que calcule a área de um triângulo.
Area=(Base*Altura)/2.
*/

main(){
    float altura, base, area;

    printf("---------------------------------------\n");
    printf("---------- AREA DO TRIANGULO ----------\n");
    printf("---------------------------------------\n\n");

    printf("Digite o valor da base: ");
    scanf("%f",&base);
    printf("Digite o valor da altura do triangulo: ");
    scanf("%f",&altura);

    area = (base*altura)/2;

    printf("\nArea do triangulo: %.2f \n", area);

    printf("\n---------------------------------------\n\n");
}
