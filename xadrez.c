#include <stdio.h>

int main()
{

    int bispo = 0, rainha = 0;

    printf("MOVIMENTAÇÃO TORRE\n");

    for (int i = 0; i < 5; i++) // movimentação do torre
    {
        printf("Direita\n");
    }

    printf("MOVIMENTAÇÃO BISPO\n");

    while (bispo < 5)
    { // movimentação bispo
        printf("Cima - Direita\n");
        bispo++;
    }

    printf("MOVIMENTAÇÃO RAINHA\n");

    do
    {
        printf("esquerda\n");
        rainha++;
    } while (rainha < 8);
       
     return 0;   
}