#include <stdio.h>

/*

    Simulação de movimentos de peças de xadrez:
    - Torre: 5 casas para a direita (usando for)
    - Bispo: 5 casas na diagonal para cima e direita (usando while)
    - Rainha: 8 casas para a esquerda (usando do while)

*/

int main() {
    //==== Torre ====
    // Move-se 5 casas para a direita usando o for
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Torre moveu para a casa %d\n", i);
    }
    printf("\n");
    //==== Bispo ====
    // Move-se 5 casas na diagonal para cima e direita usando o while
    printf("Movimento do Bispo:\n");

    int j = 1;
    while (j <= 5) {
        printf("Bispo moveu para a casa diagonal %d\n", j);
        j++;
    }

    printf("\n");
    //==== Rainha ====
    // Move-se 8 casas para a esquerda usando o do while
    printf("Movimento da Rainha:\n");
    int k = 1;
    do {
        printf("Rainha moveu para a casa %d\n", k);
        k++;
    } while (k <= 8);

    printf("\n");
    
    //==== Movimento em L (Cavalo) ====
    // Simula o movimento em L do cavalo, que é 2 casas para cima
    int movimentoCompleto = 1;
    printf("Movimento do Cavalo, moveu em L:\n");  //FlaG para controlar o movimento em L

    while (movimentoCompleto--) 
    {
        for (int i = 0; i < 2; i++)
        
            printf("Cima\n");
         
           
                printf("Direita\n");
                printf("Movimentos de xadrez simulados com sucesso!\n");
           

            }
                

    return 0;
}
// Fim do código
// Este código simula os movimentos de peças de xadrez usando estruturas de repetição em C.



