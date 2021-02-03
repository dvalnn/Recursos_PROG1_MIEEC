#include <stdio.h>

#define MAXVECTORSIZE 20

int procura_todos(int *v, int N, int x, int posicoes[], int *nPosicoes);
void i_vetor_fill(int *v, int size, int *n);
void clear_buffer();

int main()
{
    
    int vetor [MAXVECTORSIZE] = {0},
        posVal[MAXVECTORSIZE] = {0};
    
    int numOcorrencias   = 0,
        tamanhoN         = 0,
        elementoProcurar = 0,
        erro             = 0;

 /////////////////////////////////////////////////////////////////////////////////////////////////////

    i_vetor_fill(vetor, sizeof(vetor)/sizeof(vetor[0]), &tamanhoN);
    
    printf("\nQue elemento do vetor deseja procurar? ");
    clear_buffer();
    scanf ("%d", &elementoProcurar);
    
    erro = !procura_todos(vetor, tamanhoN, elementoProcurar, posVal, &numOcorrencias);

    if(erro) printf("O valor pretendido não foi encontrado no vetor.\n\n");
    else     
    {
        printf("O valor %d foi encontrado %d vezes nas posições", elementoProcurar, numOcorrencias);
        
        for (short i = 0; i < numOcorrencias; i++)
            printf (" %d", posVal[i]);
        
        printf(" do vetor.\n\n");
    }

return 0;
}

int procura_todos(int *v, int n, int x, int posicoes[], int *nPosicoes)
{
    for (short i = 0; i < n; i++)
    {
        if (v[i] == x)
        {   

            posicoes[*nPosicoes] =i;
            (*nPosicoes)++;
        }   
    }
    if (*nPosicoes) return 1;
    else            return 0;
}

void i_vetor_fill(int *v, int size, int *n)
{
    printf("Introduza os valores inteiros para o seu vetor (máximo %d valores)\n", size);
    printf("Para terminar a leitura de valores insira um valor ou character não inteiro\n\n");
    for (short i = 0; i < size; i++)
    {
        if (!scanf("%d", &v[i])) break;
        (*n)++;
    }
    
    v[(*n)++] = 0; 
}

void clear_buffer()
{
    while (getchar() != '\n') continue;
}
