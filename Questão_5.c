#include <stdio.h>

int main() {
    int num, maior, menor, primeiro = 1;

    printf("Digite um número (0 para sair): ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Nenhum número foi digitado.\n");
        return 0;
    }

    maior = num;
    menor = num;

    while (num != 0) {
        if (num > maior) {
            maior = num;
        } else if (num < menor) {
            menor = num;
        }

        printf("Digite outro número (0 para sair): ");
        scanf("%d", &num);
    }

    printf("O maior número digitado foi: %d\n", maior);
    printf("O menor número digitado foi: %d\n", menor);

    return 0;
}