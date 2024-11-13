#include <stdio.h>

int main() {
    int altura_jose = 150, altura_pedro = 110;
    int taxa_crescimento_jose = 2, taxa_crescimento_pedro = 3;
    int anos = 0;

    while (altura_pedro <= altura_jose) {
        altura_jose += taxa_crescimento_jose;
        altura_pedro += taxa_crescimento_pedro;
        anos++;
    }

    printf("Pedro será mais alto que José em %d anos.\n", anos);

    return 0;
}