#include <stdio.h>

int main() {
    int A, B, numero, quadrado;

    printf("Digite o limite inferior (A): ");
    scanf("%d", &A);
    printf("Digite o limite superior (B): ");
    scanf("%d", &B);

    // Ajusta os limites para garantir que A seja menor que B
    if (A > B) {
        int temp = A;
        A = B;
        B = temp;
    }

    printf("Quadrados dos múltiplos de 4 entre %d e %d:\n", A, B);

    // Encontra o primeiro múltiplo de 4 maior ou igual a A
    numero = ((A + 3) / 4) * 4;

    while (numero <= B) {
        quadrado = numero * numero;
        printf("%d^2 = %d\n", numero, quadrado);
        numero += 4;
    }

    return 0;
}