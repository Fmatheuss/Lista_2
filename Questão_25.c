#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    double pi, termo;

    printf("Digite o número máximo de termos: ");
    scanf("%d", &n);

    printf("\n| Número de termos | Aproximação de π |\n");
    printf("|-----------------|------------------|\n");

    pi = 0; // Inicializando pi com 0
    for (i = 1; i <= n; i++) {
        termo = 4.0 * pow(-1, i - 1) / (2 * i - 1);
        pi += termo;
        printf("| %15d | %17.15lf |\n", i, pi);
    }

    return 0;
}