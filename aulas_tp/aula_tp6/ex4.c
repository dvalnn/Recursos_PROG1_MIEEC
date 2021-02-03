#include <stdio.h>

float avg(float x[]);
float max(float x[]);
float min(float x[]);
void preencher_vetor(float v[], int n);
void imprimir_vetor  (float v[], int n);

int main()
{   
    float meu_vetor[10];
    
    preencher_vetor(meu_vetor, 10);
    printf("\nMédia: %.2f", avg(meu_vetor));
    printf("\nMáx: %.2f", max(meu_vetor));
    printf("\nMin: %.2f", min(meu_vetor));
    imprimir_vetor(meu_vetor, 10);

return 0;
}   


float avg(float x[])
{
    float soma = 0;
    
    for (short i = 0; i < 10; i++)
    {
        soma += x[i];
    }
    
return soma/10;
}

float max(float x[])
{
    float max_var = x[0];

    for (short i = 1; i < 10; i++)
    {
        if(x[i] > max_var) max_var = x[i];
    }

return max_var;
}

float min(float x[])
{
    float min_var = x[0];

    for (short i = 1; i < 10; i++)
    {
        if(x[i] < min_var) min_var = x[i];
    }

return min_var;
}

void preencher_vetor (float v[], int n)
{
    for (short i = 0; i < n; i++)
    {
        printf("Introduza o valor para o elemento %d: ", i + 1);
        scanf("%f", &v[i]);
    }
}

void imprimir_vetor  (float v[], int n)
{
    printf("\nO vetor lido foi: {");
    for (short i = 0; i < n; i++)
    {
        printf("%.1f ", v[i]);
    }
    printf("\b}\n");
}
