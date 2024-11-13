#include <stdio.h>

void printBinary(int n) {
   
    int binaryNum[32];
    int i, j;

    for (i = 0; n > 0; i++) {
        binaryNum[i] = n % 2;
        n = n / 2;
    }

    for (j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);
}

int main() {
    int decimalNum;

    printf("Decimal\tBinário\tOctal\tHexadecimal\n");
    for (decimalNum = 1; decimalNum <= 256; decimalNum++) {
        printf("%d\t", decimalNum);
        printBinary(decimalNum);
        printf("\t%o\t%X\n", decimalNum, decimalNum);
    }

    return 0;
}