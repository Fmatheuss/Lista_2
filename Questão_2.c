#include <stdio.h>

int main() {
    int dia;

    printf("Digite um numero de 1 a 7 para o dia da semana (0 para sair): ");
    scanf("%d", &dia);

    while (dia != 0) {
        switch (dia) {
            case 1:
                printf("Domingo\n");
                break;
            case 2:
                printf("Segunda-feira\n");
                break;
            // ... outros casos
            case 7:
                printf("Sábado\n");
                break;
            default:
                printf("Numero de dia nao valido.\n");
        }

        printf("Digite um numero de 1 a 7 para o dia da semana (0 para sair): ");
        scanf("%d", &dia);
    }

    return 0;
}