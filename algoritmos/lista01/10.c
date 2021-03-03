#include<stdio.h>

/*
Uma revendedora de carros usados paga a seus funcion�rios vendedores,
um sal�rio fixo por m�s e mais 5% do valor das vendas por ele efetuadas.
Construa um algoritmo que leia o n�mero do vendedor,
o total de vendas no m�s e o sal�rio fixo.
Calcule o sal�rio a ser pago a este vendedor,
escrevendo o n�mero do vendedor e seu sal�rio total.
*/

main(){
    int funcionario;
    float vendas, salario, pagamento;

    printf("------------------------------------------\n");
    printf("---------- CALCULO DE PAGAMENTO ----------\n");
    printf("------------------------------------------\n\n");

    printf("Numero do vendedor: ");
    scanf("%i",&funcionario);
    printf("Total de vendas do mes: ");
    scanf("%f",&vendas);
    printf("Salario fixo: ");
    scanf("%f",&salario);

    pagamento = salario + vendas * 0.05;

    printf("\nO funcionario %i devera receber %.2f\n", funcionario, pagamento);

    printf("\n------------------------------------------\n\n");
}
