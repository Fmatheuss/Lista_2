#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Conversão de Celsius para Fahrenheit:\n\n");

    for (celsius = 10; celsius <= 100; celsius += 10) {
        fahrenheit = (celsius * 9/5) + 32;
        printf("%.2f °C = %.2f °F\n", celsius, fahrenheit);
    }

    return 0;
}