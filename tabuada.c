#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, inicio, fim;

    printf("=== Gerador de Tabuada ===\n");

    // Solicita o número da tabuada
    printf("Digite o numero para gerar a tabuada: ");
    if (scanf("%d", &numero) != 1) {
        printf("Entrada invalida! Digite apenas numeros inteiros.\n");
        return 1;
    }

    // Solicita o intervalo inicial
    printf("Digite o valor inicial do multiplicador: ");
    if (scanf("%d", &inicio) != 1) {
        printf("Entrada invalida! Digite apenas numeros inteiros.\n");
        return 1;
    }

    // Solicita o intervalo final
    printf("Digite o valor final do multiplicador: ");
    if (scanf("%d", &fim) != 1) {
        printf("Entrada invalida! Digite apenas numeros inteiros.\n");
        return 1;
    }

    // Ajusta caso o usuário inverta o intervalo
    if (inicio > fim) {
        int temp = inicio;
        inicio = fim;
        fim = temp;
    }

    printf("\nTabuada do %d de %d ate %d:\n", numero, inicio, fim);

    // Gera a tabuada
    for (int i = inicio; i <= fim; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}