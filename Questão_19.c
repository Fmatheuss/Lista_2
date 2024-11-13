#include <stdio.h>

int main() {
    int inicio, fim, soma = 0, quantidade = 0;
    float media;

    printf("Digite o início do intervalo: ");
    scanf("%d", &inicio);
    printf("Digite o fim do intervalo: ");
    scanf("%d", &fim);

    // Garantindo que o fim seja maior que o início
    if (fim < inicio) {
        printf("O fim do intervalo deve ser maior que o início.\n");
        return 1;
    }

    for (int i = inicio; i <= fim; i++) {
        soma += i;
        quantidade++;
    }

    media = (float)soma / quantidade;

    printf("A média aritmética dos números entre %d e %d é: %.2f\n", inicio, fim, media);

    return 0;
}