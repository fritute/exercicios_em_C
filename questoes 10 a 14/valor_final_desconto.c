#include <stdio.h>
#include <stdlib.h>

int main(){

    double valorProduto, desconto, valorFinal;

    printf("........SEJA BEM VINDO AO CALCULO DE DESCONTO..........\n\n ");
    printf("Digite o valor do produto:");
    scanf("%lf", &valorProduto);
    printf("Digite o valor do desconto:");
    scanf("%lf", &desconto);
    valorFinal = valorProduto - desconto;
    printf("\nO valor final do produto com desconto eh: R$ %.2lf\n", valorFinal);
    

    return 0;
}