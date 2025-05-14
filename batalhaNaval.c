#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define TAM 10

void imprimirTabuleiro(int tabuleiro[TAM][TAM]) {
    printf("\nEstado atual do tabuleiro:\n\n");

    for (int i = 0; i < TAM; i++) {
        printf("%2d ", TAM - i); // Números da linha (10 a 1)
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Letras das colunas
    printf("   A B C D E F G H I J\n");
}

void aguardarEnter() {
    printf("\nPressione ENTER para continuar...");
    while (getchar() != '\n');
}

void limparTela() {
    // Compatível com Windows (cls) e Unix (clear)
    system("cls || clear");
}

int main() {
    int tabuleiro[TAM][TAM];
    char escolha;
    int continuar = 1;

    // Inicializa o tabuleiro com água (0)
    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < TAM; j++)
            tabuleiro[i][j] = 0;

    while (continuar) {
        printf("Digite 'A' para posicionar os navios ou 'S' para sair: ");
        scanf(" %c", &escolha);
        escolha = toupper(escolha);

        while (getchar() != '\n'); // Limpa o buffer do teclado

        if (escolha == 'S') {
            printf("\nSaindo do jogo...\n");
            break;
        }

        switch (escolha) {
            case 'A':
                // Limpa o tabuleiro antes de redesenhar os navios
                for (int i = 0; i < TAM; i++)
                    for (int j = 0; j < TAM; j++)
                        tabuleiro[i][j] = 0;

                // Navio vertical de tamanho 3 (posição fixa: C8 a C6)
                for (int i = 0; i < 3; i++)
                    tabuleiro[2 + i][2] = 3;

                // Navio horizontal de tamanho 4 (posição fixa: E4 a H4)
                for (int j = 0; j < 4; j++)
                    tabuleiro[6][4 + j] = 3;

                // Navio Diagonal de tamanho 3 (Posição fixa: )
                int linha = 0; // Tive que criar essas variaveis para me ajudar a fazer o codigo.
                int coluna = 9;

                for (int i = 0; i < 3; i++)
                    tabuleiro[linha + i][coluna - i] = 3;

                limparTela();
                imprimirTabuleiro(tabuleiro);
                aguardarEnter();
                limparTela();
                break;

            default:
                printf("\nOpção inválida. Tente novamente.\n");
                break;
        }
    }

    return 0;
}
