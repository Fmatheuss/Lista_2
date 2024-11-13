#include <stdio.h>

int main() {
    int A, B, i, contador = 0;

    printf("Digite o limite inferior (A): ");
    scanf("%d", &A);
    printf("Digite o limite superior (B): ");
    scanf("%d", &B);

    // Garante que A seja menor que B
    if (A > B) {
        int temp = A;
        A = B;
        B = temp;
    }

    for (i = A; i <= B; ++i) {
        if (i % 3 == 0) {
            contador++;
        }
    }

    printf("Há %d números divisíveis por 3 entre %d e %d.\n", contador, A, B);

    return 0;
}