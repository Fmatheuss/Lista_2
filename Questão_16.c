#include <stdio.h>

int main() {
    int soma3 = 0, soma5 = 0, i;

    for (i = 0; i <= 200; i++) {
        if (i % 3 == 0 && i <= 100) {
            soma3 += i;
        } else if (i % 5 == 0 && i > 100) {
            soma5 += i;
        }
    }

    printf("A soma dos números divisíveis por 3 no intervalo [0, 100] é: %d\n", soma3);
    printf("A soma dos números divisíveis por 5 no intervalo ]100, 200] é: %d\n", soma5);

    return 0;
}