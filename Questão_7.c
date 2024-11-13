#include <stdio.h>

int main() {
    float dividendo, divisor, resultado;

    printf("Digite o dividendo: ");
    scanf("%f", &dividendo);

    do {
        printf("Digite o divisor (diferente de zero): ");
        scanf("%f", &divisor);

        if (divisor == 0) {
            printf("Divisão por zero não é permitida. Tente novamente.\n");
        }
    } while (divisor == 0);

    resultado = dividendo / divisor;
    printf("O resultado da divisão é: %.2f\n", resultado);

    return 0;
}