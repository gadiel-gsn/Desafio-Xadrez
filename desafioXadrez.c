#include <stdio.h>

int main()
{
    int movimentoCompleto = 1;

    for (int i = 0; i < 5; i++)
    { // Mover a torre para a direita 5 vezes
        printf("Direita\n");
    }

    for (int i = 0; i < 5; i++)
    { // Move o Bispo para diagonal 5 vezes
        printf("Cima, Direita\n");
    }

    for (int i = 0; i < 8; i++)
    { // Move a Rainha para esquerda 8 vezes
        printf("Esquerda\n");
    }

    while (movimentoCompleto--)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
    }

    return 0;
}
