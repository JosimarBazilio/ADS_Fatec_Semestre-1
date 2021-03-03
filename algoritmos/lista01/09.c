#include<stdio.h>
#include<math.h>

/*
Calcule o índice de massa corpórea (IMC) de uma pessoa.
O IMC é calculado dividindo-se o peso da pessoa,
em kg, pelo quadrado da sua altura, em metros.
*/

main(){
    float peso, altura, imc;

    printf("------------------------------------\n");
    printf("---------- Calculo de IMC ----------\n");
    printf("------------------------------------\n\n");

    printf("Informe seu peso(kg): ");
    scanf("%f",&peso);
    printf("Informe sua altura(M): ");
    scanf("%f",&altura);

    imc = peso / pow(altura,2);

    printf("\nIMC: %.2f\n", imc);

    printf("\n------------------------------------\n\n");
}
