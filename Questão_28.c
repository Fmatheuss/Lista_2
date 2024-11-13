#include <stdio.h>

#define ARRAY_SIZE 100 

int main() {
    unsigned char X, Y, array[ARRAY_SIZE];

    printf("Digite o valor de X: ");
    scanf("%hhu", &X);
    printf("Digite o valor de Y (maior ou igual a 5): ");
    scanf("%hhu", &Y);

   
    if (Y < 5) {
        printf("Y deve ser maior ou igual a 5.\n");
        return 1;
    }

   
    for (int i = Y - 4; i <= Y + 4; i++) {
        array[i] &= X;
    }

   
    return 0;
}