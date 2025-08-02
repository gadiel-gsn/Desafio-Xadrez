#include <stdio.h>
// Move a torre X vezes para a direita
void moverTorre(int casas)
{
    if (casas > 0)
    {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}
// Move o bispo X vezes para cima e direita
void moverBispo(int casas)
{
    int contador = 0;
    {

        for (int i = 0; i < 5; i++)

        {
            for (int j = 0; j < 5; j++)
                if (contador < casas)
                {
                    printf("Cima, Direita\n");
                    contador++;
                }
                else
                {
                    break;
                }
        }
    }
}
// Move a rainha X vezes para a esquerda
void moverRainha(int casas)
{
    if (casas > 0)
    {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}
// Move o cavalo X vezes para cima e direita
void moverCavalo(int casas)
{
    for (int i = 0; i < casas; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Cima\n");
        }
        printf("Direita\n");
    }
}

int main()
{
    moverTorre(5);
    moverBispo(5);
    moverRainha(8);
    moverCavalo(1);

    return 0;
}