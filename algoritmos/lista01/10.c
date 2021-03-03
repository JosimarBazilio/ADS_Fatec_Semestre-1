#include<stdio.h>

/*
Uma revendedora de carros usados paga a seus funcionários vendedores,
um salário fixo por mês e mais 5% do valor das vendas por ele efetuadas.
Construa um algoritmo que leia o número do vendedor,
o total de vendas no mês e o salário fixo.
Calcule o salário a ser pago a este vendedor,
escrevendo o número do vendedor e seu salário total.
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
