#include <stdio.h>
#include <stdlib.h>

int main(){

   double base, altura, area, perimetro;

    printf("........SEJA BEM VINDO AO CALCULO DE AREA DE UM RETANGULO..........\n\n ");


    printf("Digite a base do seu retangulo:");
    scanf("%lf", &base);

    printf("Digite a altura do seu retangulo:");
    scanf("%lf", &altura);


    perimetro = 2 * (base + altura);

    area = base * altura;
    printf("\nO perimetro do seu retangulo eh: %.2lf\n", perimetro);
    printf("A area do seu retangulo eh: %.2lf\n", area);

    return 0;
}