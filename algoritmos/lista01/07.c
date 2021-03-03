#include<stdio.h>
#include<math.h>

/*
Construa um algoritmo que o usu�rio entre com um lado de um quadrado e informe:
a. Per�metro: lado * 4
b. �rea: lado2
c. Diagonal: lado * (2^1/2)
*/

main(){
    float lado, perimetro, area, diagonal;

    printf("----------------------------------------------\n");
    printf("---------- Caracteristicas quadrado ----------\n");
    printf("----------------------------------------------\n\n");

    printf("Informe um lado do quadrado: ");
    scanf("%f",&lado);

    perimetro = lado * 4;
    area = pow(lado,2);
    diagonal = lado * pow(2,1.0/2.0);

    printf("\nPerimetro: %.2f\n", perimetro);
    printf("\nArea: %.2f\n", area);
    printf("\nDiagonal: %.2f\n", diagonal);

    printf("\n----------------------------------------------\n\n");
}
