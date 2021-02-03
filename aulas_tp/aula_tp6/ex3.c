#include <stdio.h>

void preencher_vetor (float v[], int n);
float somatorio_vetor(float v[], int n);
void imprimir_vetor  (float v[], int n);


int main()
{
    short elementos = 20;
    float meu_vetor[15] = {0};

    printf("Quantos elementos pretende armazenar? ");
    
    while (elementos > 15)
    {   
        printf("(o numero máximo de elemntos é 15): ");
        scanf("%hd", &elementos);
    }
    
    preencher_vetor(meu_vetor, elementos);
    imprimir_vetor(meu_vetor, elementos);

    printf("A soma dos elementos do vetor é: %.1f\n", somatorio_vetor(meu_vetor, elementos));

return 0;
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

float somatorio_vetor(float v[], int n)
{
    for (short i = 1; i < n; i++)
    {
        v[0] += v[i];
    }

return v[0];
}