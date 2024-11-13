#include <stdio.h>

int main() {
    int voto, votos_paulo = 0, votos_renata = 0, votos_brancos = 0, votos_nulos = 0, total_votos = 0;

    printf("Bem-vindo à urna eletrônica!\n");

    while (1) {
        printf("Digite o número do seu candidato (5-Paulo, 7-Renata, 0-Branco): ");
        scanf("%d", &voto);

        if (voto < 0) {
            break; // Encerra a votação
        }

        printf("Confirma seu voto? (1-Sim, 2-Não): ");
        int confirmacao;
        scanf("%d", &confirmacao);

        if (confirmacao == 1) {
            switch (voto) {
                case 5:
                    votos_paulo++;
                    break;
                case 7:
                    votos_renata++;
                    break;
                case 0:
                    votos_brancos++;
                    break;
                default:
                    votos_nulos++;
            }
            total_votos++;
        }
    }

    // Cálculo das porcentagens
    float porcentagem_paulo = (float) votos_paulo / total_votos * 100;
    float porcentagem_renata = (float) votos_renata / total_votos * 100;
    float porcentagem_brancos = (float) votos_brancos / total_votos * 100;
    float porcentagem_nulos = (float) votos_nulos / total_votos * 100;

    // Apresentação dos resultados
    printf("\nResultados da eleição:\n");
    printf("Total de votos: %d\n", total_votos);
    printf("Votos para Paulo (5): %d (%.2f%%)\n", votos_paulo, porcentagem_paulo);
    printf("Votos para Renata (7): %d (%.2f%%)\n", votos_renata, porcentagem_renata);
    printf("Votos em branco: %d (%.2f%%)\n", votos_brancos, porcentagem_brancos);
    printf("Votos nulos: %d (%.2f%%)\n", votos_nulos, porcentagem_nulos);

    // Determinação do vencedor (simplificado)
    if (votos_paulo > votos_renata) {
        printf("O candidato eleito é Paulo (5).\n");
    } else if (votos_renata > votos_paulo) {
        printf("A candidata eleita é Renata (7).\n");
    } else {
        printf("Houve empate!\n");
    }

    return 0;
}