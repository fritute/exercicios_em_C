#include <stdio.h>
#include <stdlib.h>

int main(){

    double comprimento, largura, altura, volume;
    printf("........SEJA BEM VINDO AO CALCULO DE VOLUME DE UMA CAIXA..........\n\n ");
    printf("Digite o comprimento da caixa:");
    scanf("%lf", &comprimento);
    printf("Digite a largura da caixa:");
    scanf("%lf", &largura);
    printf("Digite a altura da caixa:");
    scanf("%lf", &altura);
    volume = comprimento * largura * altura;
    printf("\nO volume da caixa eh: %.2lf\n", volume);
    

    return 0;
}