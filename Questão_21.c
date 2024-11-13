#include <stdio.h>

int main() {
    int numero, original, invertido = 0, digito;

    printf("Digite um número de 5 dígitos: ");
    scanf("%d", &numero);

    original = numero;  

    while (numero != 0) {
        digito = numero % 10;  
        invertido = invertido * 10 + digito;  
        numero /= 10;  
    }

    if (original == invertido) {
        printf("%d é um palíndromo.\n", original);
    } else {
        printf("%d não é um palíndromo.\n", original);
    }

    return 0;
}