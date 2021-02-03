#include <stdio.h>
#define N_ALUNOS 4

int main()
{
    int notas_alunos[N_ALUNOS][3];

    printf("\n");
    for (short i = 0; i < N_ALUNOS; i++)
    {
        printf("Dados do aluno %d: ", i+1);
        for (short j = 0; j < 3; j++)
        {
            scanf("%d", &notas_alunos[i][j]);
        }
    }

    printf  ("Numero | Nota 1 | Nota 2 | Média");
    
    for (short i = 0; i < N_ALUNOS; i++)
    {
      printf("\n%d   | %d   | %d   | %.2f   ", notas_alunos[i][0], notas_alunos[i][1], notas_alunos[i][2], (notas_alunos[i][1] + notas_alunos[i][2])/2.);
    }
    
return 0; 
}