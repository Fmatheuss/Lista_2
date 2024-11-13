#include <stdio.h>

int main() {
    int num, fatorial = 1;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Número inválido. O fatorial é definido apenas para números inteiros não negativos.\n");
    } else {
        for (int i = 1; i <= num; i++) {
            fatorial *= i;
        }

        printf("O fatorial de %d é %d\n", num, fatorial);
    }

    return 0;
}