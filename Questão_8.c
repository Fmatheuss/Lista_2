#include <stdio.h>

int main() {
    float valor_mercadoria, valor_prestacao;
    int entrada_inteira;

    printf("Digite o valor da mercadoria: R$ ");
    scanf("%f", &valor_mercadoria);

    // Calcula o valor da prestação, arredondando para baixo para garantir que seja inteira
    valor_prestacao = valor_mercadoria / 3;
    entrada_inteira = valor_prestacao;

    // Ajusta a entrada para garantir que seja maior ou igual às prestações
    if (valor_mercadoria - 2 * entrada_inteira > 0) {
        entrada_inteira++;
    }

    printf("Entrada: R$ %.2f\n", valor_mercadoria - 2 * entrada_inteira);
    printf("Prestações: 2x R$ %.2f\n", (float)entrada_inteira);

    return 0;
}