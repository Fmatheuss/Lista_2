#include <stdio.h>

int main() {
    int numero, fatorial;

    printf("Fatoriais dos números ímpares de 1 a 10:\n");

    for (numero = 1; numero <= 10; numero += 2) {
        fatorial = 1;
        for (int i = 2; i <= numero; i++) {
            fatorial *= i;
        }
        printf("O fatorial de %d é: %d\n", numero, fatorial);
    }

    return 0;
}