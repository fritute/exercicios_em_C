#include <stdio.h>
#include <stdlib.h>

int main() {
   int numeroSelecionado, numero1, numero2;

    printf("=== Gerador de Triplo e Duplo ===\n");

   printf("Digite um numero inteiro: ");
    scanf("%d", &numeroSelecionado);

    numero1 = numeroSelecionado * 2;
    numero2 = numeroSelecionado * 3;

    printf("O dobro de %d eh: %d\n", numeroSelecionado, numero1);
    printf("O triplo de %d eh: %d\n", numeroSelecionado, numero2);





    return 0;
}
