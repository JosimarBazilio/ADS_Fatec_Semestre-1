#include<stdio.h>

/*
Construa um algoritmo para ler uma temperatura em graus Fahrenheit,
calcular e escrever o valor correspondente em graus Celsius: 5 / 9 * (F – 32).
*/

main(){
    float fahrenheit, celsius;

    printf("----------------------------------------------\n");
    printf("---------- CONVERSAO DE TEMPERATURA ----------\n");
    printf("----------------------------------------------\n\n");

    printf("Informe a temperatura(F): ");
    scanf("%f",&fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("\n%.2f F = %.2f C\n", fahrenheit, celsius);

    printf("\n----------------------------------------------\n\n");
}
