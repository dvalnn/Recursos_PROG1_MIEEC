#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NAME_SIZE 20
#define DIAS_MAX 30
#define TAREFAS_MAX 30

typedef struct tarefa{

    char nome[NAME_SIZE];
    int trabalhadoresPorDia[DIAS_MAX];
    int diasPorTarefa;

}tarefa;

short maxVetorIndex(short d[], int n);
short maisTrabalhadores(tarefa taref[], int n);

int main(){

    tarefa tarefas[30];
    short numTarefas = 0;

    FILE *inputFile;
    inputFile = fopen("tarefas.txt", "r");
    
    short dias[DIAS_MAX] = {0};
    short fimTarefa[DIAS_MAX] = {0};

    for (numTarefas = 0; numTarefas < TAREFAS_MAX; numTarefas++)
    {
        short j = 0;
        if(fscanf(inputFile, "%s", tarefas[numTarefas].nome) == EOF) break;
        while(1)
        {
            fscanf(inputFile, "%d", &tarefas[numTarefas].trabalhadoresPorDia[j]);
            if(tarefas[numTarefas].trabalhadoresPorDia[j] == -1) {
                fimTarefa[j-1]++;
                break;
            }
            dias[j]++;
            j++;
        }
        tarefas[numTarefas].diasPorTarefa = j + 1;
        dias[j]++;
    }

    for (short i = 0; i < numTarefas; i++)
    {
        printf("tarefa %s:", tarefas[i].nome);
        
        for (short j = 0; j < tarefas[i].diasPorTarefa; j++)
        {
            printf(" %d", tarefas[i].trabalhadoresPorDia[j]);
        }
        printf("\n");
    }    

    printf("\n");
    
    printf("Dia com mais tarefas: %d\n", maxVetorIndex(dias, DIAS_MAX));
    printf("Dia com mais tarefas terminadas: %d\n", maxVetorIndex(fimTarefa, DIAS_MAX));
    printf("Tarefa com maior numero de trabalhadores: %s\n", tarefas[maisTrabalhadores(tarefas, numTarefas)].nome);

return 0;
}

short maisTrabalhadores(tarefa taref[], int n){
    short max = 0, sum = 0;
    short returnVAl = 0;
    
    for (short i = 0; i < n; i++)
    {
        sum = 0;
        for (short j = 0; j < taref[i].diasPorTarefa - 1; j++)
        {
            sum += taref[i].trabalhadoresPorDia[j];
        }
        if(sum > max){
            max = sum;
            returnVAl = i;
        }
    }
    return returnVAl;
}

short maxVetorIndex(short d[], int n){
    short max = 0, dmax = 0;

    for (short i = 0; i < n; i++)
    {
        if (d[i] > max){
            max = d[i];
            dmax = i;
        }    
    }

return dmax + 1;
}

