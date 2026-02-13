#include <stdio.h>
#include <stdlib.h>

int main(){

    double valorBoleto, jurosBoleto, diasDeVencimento, valorFinal;

    printf("........SEJA BEM VINDO AO CALCULO DE BOLETOS..........\n\n ");

    printf("Digite o valor do seu boleto: ");
    scanf("%lf", &valorBoleto);

    printf("Digite a quantidade de dias em atraso: ");
    scanf("%lf", &diasDeVencimento);

    printf("Digite a taxa de juros ao dia (em porcentagem): ");
    scanf("%lf", &jurosBoleto);

    jurosBoleto = jurosBoleto / 100;

    valorFinal = valorBoleto + (valorBoleto * jurosBoleto * diasDeVencimento);

    printf("\nO valor final do boleto, apos %0.lf dias de atraso, eh: R$ %.2lf\n", diasDeVencimento, valorFinal);
    return 0;
}