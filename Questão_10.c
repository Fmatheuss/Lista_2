#include <stdio.h>

int main() {
    int numero, quadrado;

    printf("Quadrados dos múltiplos de 4 entre 15 e 90:\n");

    // Iniciamos o loop em 16, pois é o primeiro múltiplo de 4 maior que 15
    for (numero = 16; numero <= 90; numero += 4) {
        quadrado = numero * numero;
        printf("%d^2 = %d\n", numero, quadrado);
    }

    return 0;
}