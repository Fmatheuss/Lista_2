#include <stdio.h>

int main() {
    int i, termos = 20;
    int t1 = 0, t2 = 1, nextTerm;

    // Imprimindo os dois primeiros termos
    printf("Sequência de Fibonacci até o %dº termo:\n", termos);
    printf("%d, %d, ", t1, t2);

    // Calculando e imprimindo os termos restantes
    for (i = 3; i <= termos; ++i) {
        nextTerm = t1 + t2;
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}