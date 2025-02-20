#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

const int MOV_BISPO = 5; 
const int MOV_TORRE = 5;
const int MOV_RAINHA = 8;
const int MOV_CAVALO_3 = 3;
const int MOV_CAVALO_2 = 2;


void moverBispo(int x, int passo) {
    if (passo == MOV_BISPO) 
        return;

    printf("Movendo bispo na casa %d\n", passo);
    x += 1;        
    moverBispo(x, passo + 1);
}

void moverTorre(int x, int passo) {
    if (passo == MOV_TORRE) 
        return;

    printf("Movendo torre na casa %d\n", passo);
    x += 1;        
    moverTorre(x, passo + 1);
}

void moverRainha(int x, int passo) {
    if (passo == MOV_RAINHA) 
        return;

    printf("Movendo rainha na casa %d\n", passo);
    x += 1;        
    moverRainha(x, passo + 1);
}


int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    

    int contador = 1;
    


    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.    
    printf("==================================\n");
    printf("Movimento do Bispo\n");
    while (contador <= MOV_BISPO)
    {
        printf("Diagonal a direita na casa: %d\n", contador);
        contador++;
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("==================================\n");
    printf("Movimento da Torre\n");
    contador = 1;        
    while (contador <= MOV_TORRE)
    {
        printf("Movendo casa: %d\n", contador);
        contador++;
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("==================================\n");
    printf("Movimento da Rainha\n");
    contador = 1;        
    while (contador <= MOV_RAINHA)
    {
        printf("Movendo casa: %d\n", contador);
        contador++;
    }



    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("==================================\n");
    printf("Movimento do Cavalo\n");
    contador = 0;
    for (int i=0; i < MOV_CAVALO_3; i++)
    {
        printf("Movendo %d para cima\n", i);
        
        if (i >= MOV_CAVALO_2){
            while(contador < MOV_CAVALO_2){
                printf("Movendo %d a esquerda\n", contador);
                contador++;
            }
        }

    }

    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    // *NÃO CONSEGUI ACHAR UM USO PARA O continue e break dentro da implementação do cavalo*

    int x = 0, passo = 0;
    printf("\n\n");
    printf("\n\n");
    printf("----NIVEL MESTRE----:\n");
    printf("--------------------:\n");
    printf("\n\n");
    
    // Movimentação do Bispo
    printf("--------------------:\n");
    moverBispo(x, passo);
    

    // Movimentação da torre
    printf("--------------------:\n");
    moverTorre(x, passo);
    

    // Movimentação da Rainha
    printf("--------------------:\n");
    moverRainha(x, passo);
    

    return 0;
}
