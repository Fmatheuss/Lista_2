#include <stdio.h>

int main() {
    int A, B, soma = 0, i;

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

    // Inicia o loop com o primeiro número par maior ou igual a A
    i = (A + 1) & ~1; // Garante que i seja o próximo número par

    while (i <= B) {
        soma += i;
        i += 2;
    }

    printf("A soma dos números pares entre %d e %d é: %d\n", A, B, soma);

    return 0;
}