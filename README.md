# Desafio de Movimentação de Peças de Xadrez - Nível Básico

Este projeto é uma simulação simples em linguagem C que demonstra o uso de estruturas de repetição (`for`, `while` e `do-while`) para representar a movimentação de peças de xadrez em um tabuleiro.

## Peças e Movimentos

O programa simula os seguintes movimentos:
- **Torre:** 5 casas para a **Direita** (utilizando `for`).
- **Bispo:** 5 casas na **Diagonal (Cima e Direita)** (utilizando `while`).
- **Rainha:** 8 casas para a **Esquerda** (utilizando `do-while`).

##  Tecnologias Utilizadas
- Linguagem C
- Compilador GCC (ou qualquer compilador C padrão)

##  Requisitos do Projeto
- Implementar a lógica de cada peça individualmente.
- Utilizar uma estrutura de repetição diferente para cada peça.
- Seguir os padrões de saída de dados (`printf`) solicitados no desafio.
- Código devidamente comentado para facilitar a leitura e manutenção.

##  Como executar
1. Certifique-se de ter um compilador C instalado (como o GCC).
2. Salve o arquivo como `xadrez.c`.
3. Abra o terminal e compile o código:
   ```bash
   gcc xadrez.c -o xadrez
