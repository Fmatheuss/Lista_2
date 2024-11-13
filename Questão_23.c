#include <stdio.h>

int main() {
    int x = 10;

    
    printf("Pré-decremento: x = %d\n", --x); // Imprime 9, pois x já foi decrementado

    x = 10; 

   
    printf("Pós-decremento: x = %d\n", x--); 
    printf("Agora x vale: %d\n", x);

    return 0;
}