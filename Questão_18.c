#include <stdio.h>
#include <math.h>

int main() {
    long long int total_graos = 0;
    int i;


    total_graos = 1 * (pow(2, 64) - 1) / (2 - 1);

    printf("A quantidade total de grãos de trigo é: %lld\n", total_graos);

    return 0;
}