# ♟️ Simulação de Movimentos de Xadrez em C

Este repositório contém um programa em linguagem C desenvolvido para fins acadêmicos. O código simula os movimentos de peças de xadrez, utilizando estruturas de repetição (`for`, `while`, `do-while`) como parte da prática de lógica de programação.

## 🧠 Objetivo

Demonstrar o uso das principais estruturas de repetição em C através da simulação dos movimentos básicos de peças do xadrez.

## 💡 Descrição do Programa

O programa realiza os seguintes movimentos:

- **Torre** → Move 5 casas para a direita (estrutura `for`)
- **Bispo** → Move 5 casas na diagonal (estrutura `while`)
- **Rainha** → Move 8 casas para a esquerda (estrutura `do-while`)
- **Cavalo** → Movimento em "L": 2 casas para cima e 1 para o lado (estrutura combinada `while` + `for`)

Cada movimento é impresso no terminal simulando o deslocamento da peça.

## 🧪 Como Executar

### Compilação

Use o `gcc` ou outro compilador compatível:

```bash
gcc xadrez_simulacao.c -o xadrez_simulacao
