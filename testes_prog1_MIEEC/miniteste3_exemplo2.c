/*
    Implemente a função compacta com as seguintes características:
        - remove todos os elementos adjacentes iguais no vetor de entrada 
          ao copiar para o vetor de saída
        - o tamanho do vetor de entrada é indicado no parâmetro n
        - o retorno da função deverá ser o tamanho do vetor de saída
        - a função deve verificar se o tamanho do vetor de entrada está
          dentro dos limites (0 < n <= TAM_MAX); caso não esteja deve retornar 0

    Resultado esperado:
        Teste 1: { 0 1 }
        Teste 2: { }
        Teste 3: { 0 1 0 1 0 1 0 1 }
        Teste 4: 8
        Teste 5: { }
        Teste 6: 0
        Teste 7: { 1 0 1 0 }
*/

#include <stdio.h>

#define TAM_MAX 20

/********************************************/
/*       ALTERAR APENAS ESTA FUNCAO         */

int compacta(int entrada[], int n, int saida[])
{

    return -1;
}

/********************************************/

void imprime_vetor(int v[], int n);

int main()
{
    int v1[TAM_MAX] = { 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1};
    int v2[TAM_MAX] = { 1, 0, 0, 0, 0, 1, 0, 1, 1, 0};
    int res[TAM_MAX], tam;

    tam = compacta(v1, 5, res);
    printf("Teste 1: ");
    imprime_vetor(res, tam);

    tam = compacta(v1, 0, res);
    printf("Teste 2: ");
    imprime_vetor(res, tam);

    tam = compacta(v1, 20, res);
    printf("Teste 3: ");
    imprime_vetor(res, tam);

    printf("Teste 4: %d\n", tam);

    tam = compacta(v1, 30, res);
    printf("Teste 5: ");
    imprime_vetor(res, tam);

    printf("Teste 6: %d\n", tam);

    tam = compacta(v2, 7, res);
    printf("Teste 7: ");
    imprime_vetor(res, tam);
}

void imprime_vetor(int v[], int n)
{
    int i;
    printf("{");
    for(i=0; i<n; i++)
        printf(" %d", v[i]);
    printf(" }\n");
}
