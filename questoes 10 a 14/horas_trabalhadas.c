#include <stdio.h>
#include <stdlib.h>

int main(){

    double horasTrabalhadas, valorHora, salario;

    printf("........SEJA BEM VINDO AO CALCULO DE SALARIO..........\n\n ");

    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%lf", &horasTrabalhadas);

    printf("Digite o valor da hora trabalhada: ");
    scanf("%lf", &valorHora);

    salario = horasTrabalhadas * valorHora;

    printf("\nO salario total a ser recebido eh: R$ %.2lf\n", salario);
    return 0;
}