#include <stdio.h>

#define NMAX 10

short uiLoop();
void clearBuffer();

int pos(int x, int y, int tamanho);
void imprimeMatriz (int matriz[], int n);
void produtoEscalar(int matriz[], int n, int escalar);
void multMatrizes  (int matriz[], int mult[], int resultado[], int n);


int main()
{
    int size, escalar;

    int matriz1D  [NMAX*NMAX],
        matriz2D  [NMAX][NMAX],
        matrizMult[NMAX],
        matrizRes [NMAX];

    printf("Qual o tamanho da matriz quadrada? (max 10 = 10 x 10) ");
    scanf("%d", &size);

    if (size > NMAX)
    {
        printf("\nTamanho máximo para a matriz excedido\n\n");
        return 0;
    }
    
    printf("Introduza %d valores para preencher a matriz: ", size*size);

    for (short i = 0; i < size * size; i++)
    {
        scanf("%d", &matriz1D[i]);
    } 

    for (short i = 0; i < size; i++)
        for (short j = 0; j < size; j++)
            matriz2D[i][j] = matriz1D[pos(i, j, size)];
    
    while (1)
    {
        switch (uiLoop())
        {
            case 1:
                printf("\n");
                for (short i = 0; i < size; i++)
                {
                    for (short j = 0; j < size; j++)
                        printf(" %d", matriz2D[i][j]);
                    printf("\n");
                }
                break;
            
            case 2:
                printf("\n");
                imprimeMatriz(matriz1D, size);
                break;
            
            case 3:
                printf("\nIntroduza um valor escalar inteiro: ");
                
                while (1)
                {
                    clearBuffer();
                    
                    if (!scanf("%d", &escalar))
                    {
                        printf("\nErro, introduza um valor válido.");
                        continue;
                    }
                    break;
                }

                produtoEscalar(matriz1D, size, escalar);
                break;
            
            case 4:
                clearBuffer();
                printf("\nIntroduza um vetor de tamanho %d: ", size);

                for (short i = 0; i < size; i++)
                    scanf("%d", &matrizMult[i]);
                
                multMatrizes(matriz1D, matrizMult, matrizRes, size);

                printf("\n O resultado da operação é o vetor:\n\n");
                for (short i = 0; i < size; i++)
                    printf(" %d\n", matrizRes[i]);
                printf("\n");
                break;

            case 5:
                return 0;

            default:
                printf("\nErro, valor introduzido não corresponde a nenhuma operação.\n");
                break;
        }
    }
return 0;
}

short uiLoop()
{
        short ui;

        printf("\nQue operação deseja efetuar?");
        printf("\n1 - Visualizar a matriz original que introduziu.");
        printf("\n2 - Visualizar a matriz no seu estado a atual.");
        printf("\n3 - Multiplicar a matriz por um escalar.");
        printf("\n4 - Multiplicar a matriz por um vetor.");
        printf("\n5 - Terminar o programa.");

    while (1)
    {
        clearBuffer();
        printf("\nInput: ");
        if (!scanf("%hd", &ui))
        {
            printf("\n Erro, introduza um valor válido.\n");
            continue;
        }
        
        return ui;
    }
}

int pos(int x, int y, int tamanho)
{
    return x + y * tamanho;
}

void imprimeMatriz (int matriz[], int n)
{
    printf("\n");
    for (short i = 0; i < n; i++)
    {   
        for (short j = 0; j < n; j++)
            printf(" %d", matriz[pos(i, j, n)]);

        printf("\n");
    }
}

void produtoEscalar(int matriz[], int n, int escalar)
{
    for (short i = 0; i < n*n; i++)
        matriz[i] *= escalar; 
}

void multMatrizes  (int matriz[], int mult[], int resultado[], int n)
{
    for (short i = 0; i < n; i++)
        for (short j = 0; j < n; j++)
            resultado[i] = matriz[pos(i ,j ,n)] * mult[i];   
}

void clearBuffer()
{
    while (getchar() != '\n') continue;
}