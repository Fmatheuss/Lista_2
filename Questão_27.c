#include <stdio.h>

int main() {
    int num, maior, menor, produto;
    int primeiroNumero = 1;

    printf("Digite números inteiros (número negativo e par para sair):\n");

    while (1) {
        scanf("%d", &num);

        if (num < 0 && num % 2 == 0) {
            break;
        }
               
        if (primeiroNumero) {
            maior = num;
            menor = num;
            primeiroNumero = 0;
        } else {
            if (num > maior) {
                maior = num;
            }
            if (num < menor) {
                menor = num;
            }
        }
    }

    
    if (primeiroNumero) {
        printf("Nenhum número válido foi digitado.\n");
    } else {
        produto = maior * menor;
        printf("O produto do maior e menor número é: %d\n", produto);
    }

    return 0;
}