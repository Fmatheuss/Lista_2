#include <stdio.h>

int main() {
    int dia;

    do {
        printf("Digite um numero de 1 a 7 para o dia da semana (0 para sair): ");
        scanf("%d", &dia);

        switch (dia) {
            case 1:
                printf("Domingo\n");
                break;
            case 2:
                printf("Segunda-feira\n");
                break;
            case 3:
                printf("Terça-feira\n");
                break;
            case 4:
                printf("Quarta-feira\n");
                break;
            case 5:
                printf("Quinta-feira\n");
                break;
            case 6:
                printf("Sexta-feira\n");
                break;
            case 7:
                printf("Sábado\n");
                break;
            case 0:
                break; 
            default:
                printf("Numero de dia nao valido.\n");
        }
    } while (dia != 0);

    return 0;
}