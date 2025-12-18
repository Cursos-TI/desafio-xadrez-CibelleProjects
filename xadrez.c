#include <stdio.h>

// Desafio de Xadrez - Movimentação das Peças
// Este programa simula o movimento da Torre, Bispo e Rainha.
//Cada movimento utiliza uma estrutura de repetição diferente(for, while, do-while)

int main() {
    // Variáveis para armazenar a quantidade de movimentos
    int movimentoTorre = 5;
    int movimentoBispo = 5;
    int movimentoRainha = 8;
    int i; //variavel auxiliar de contagem

    // Movimentação da Torre: 5 casas para a direita usando 'for'
    printf("Movimentação da Torre:\n");
    for (i = 1; i <= movimentoTorre; i++) {
        printf("Direita\n");
    }

    printf("\n"); // Linha em branco para organizar a saída

    // Movimentação do Bispo: 5 casas na diagonal cima/direita usando 'while'
    printf("Movimentação do Bispo:\n");
    i = 1;
    while (i <= movimentoBispo) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\n");

    // Movimentação da Rainha: 8 casas para a esquerda usando 'do-while'
    printf("Movimentação da Rainha:\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= movimentoRainha);

    return 0;
}