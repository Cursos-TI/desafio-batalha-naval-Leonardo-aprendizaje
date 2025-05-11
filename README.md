
# 🛳️ Jogo de Tabuleiro Batalha Naval em C

Este é um projeto simples feito em linguagem C que simula um tabuleiro 10x10 no terminal, onde são posicionados navios representados pelo número `3`, e o restante das células representa água (`0`).

## 💡 Objetivo

Criar um tabuleiro com navios:
- Um navio na **vertical** (tamanho 3).
- Um navio na **horizontal** (tamanho 4).
- Exibir o tabuleiro de forma organizada.
- Controlar a visualização via terminal.

## 📦 Funcionalidades

- Exibe o tabuleiro com numeração de linhas e letras nas colunas.
- Navios são colocados em posições fixas:
  - **Vertical**: da posição `C8` até `C6`.
  - **Horizontal**: da posição `E4` até `H4`.
- Limpa a tela e aguarda o ENTER do usuário após mostrar o tabuleiro.
- O usuário pode optar por sair ou redesenhar o tabuleiro.

## 🖥️ Exemplo de saída

Estado atual do tabuleiro:

10 0 0 0 0 0 0 0 0 0 0
9  0 0 0 0 0 0 0 0 0 0
8  0 0 3 0 0 0 0 0 0 0
7  0 0 3 0 0 0 0 0 0 0
6  0 0 3 0 0 0 0 0 0 0
5  0 0 0 0 0 0 0 0 0 0
4  0 0 0 0 3 3 3 3 0 0
3  0 0 0 0 0 0 0 0 0 0
2  0 0 0 0 0 0 0 0 0 0
1  0 0 0 0 0 0 0 0 0 0
   A B C D E F G H I J