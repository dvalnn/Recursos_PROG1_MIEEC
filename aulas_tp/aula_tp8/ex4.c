#include <stdio.h>

#define N_ALUNOS 4

void medias (int notas[][3], int n, float medias[][2]);
void ordena (float notas[][2], int n);

int main()
{

    int notas_alunos[N_ALUNOS][3];
    float medias_alunos[N_ALUNOS][2];

    printf("\n");
    for (short i = 0; i < N_ALUNOS; i++)
    {
        printf("Dados do aluno %d: ", i+1);
        for (short j = 0; j < 3; j++)
        {
            scanf("%d", &notas_alunos[i][j]);
        }
    }

    medias(notas_alunos, N_ALUNOS, medias_alunos);
    ordena(medias_alunos, N_ALUNOS);

    for (short i = 0; i < N_ALUNOS; i++)
        printf("\nAluno: %.f Média: %.2f", medias_alunos[i][0], medias_alunos[i][1]);
    printf("\n");

return 0;
}

void ordena (float notas[][2], int n)
{
    float aux, aux2;
    short pos, max;
    
    pos = 0;
    
    while (pos < n - 1)
    { 
        max = pos;

        for (short i = pos; i < n; i++)
        {
            if (notas[i][1] > notas[max][1])
                max = i; 
        }
        
        if (max != pos)
        {
            aux  = notas[pos][0];
            aux2 = notas[pos][1];
            
            notas[pos][0] = notas[max][0];
            notas[pos][1] = notas[max][1];
            
            notas[max][0] = aux;
            notas[max][1] = aux2; 
        }
        
        pos++;
    }
}

void medias (int notas[][3], int n, float medias[][2])
{
    for (short i = 0; i < n; i++)
    {
        medias[i][0] = notas[i][0];
        medias[i][1] = (notas[i][1] + notas[i][2]) / 2.;        
    }
}
