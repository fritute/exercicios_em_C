#include <stdio.h>
#include <stdlib.h>

int main(){

 double metros,quilometros;

    printf("........SEJA BEM VINDO AO CALCULO DE QUILOMETROS PARA METROS..........\n\n ");

    printf("Digite a quantidade de quilometros:");
    scanf("%lf", &quilometros);

    metros = quilometros * 1000;

    printf("\nA quantidade em metros eh: %.2lf\n", metros);
    
    return 0;
}