#include <stdio.h>

int contaRepeticao(int v[], int tamanhoVetor, int numero);

int main()
{
    int user_input[100] = {0};
    int num_pesquisar;

    for (short i = 0; i < 100; i++)
    {
        printf("Intruduza um numero: ");
        scanf("%d",&user_input[i]);
        
        if (user_input[i] < 0) break;

    }

    printf("Intruduza um numero a pesquisar: ");
    scanf("%d",&num_pesquisar);

    printf("Maior sequencia com numeros %d tem tamanho %d\n",num_pesquisar, contaRepeticao(user_input, 10, num_pesquisar));

return 0;
}

int contaRepeticao(int v[], int tamanhoVetor, int numero)
{
    int tamanho_seq = 0;
    int tamanho_max_seq = 0;
    short i;

    for ( i = 0; i < tamanhoVetor; i++)
    {    
        while (v[i] == numero)
        {
            tamanho_seq++;
            i++;
        }

        if(tamanho_seq > tamanho_max_seq)
            tamanho_max_seq = tamanho_seq;

        if (v[i] < 0) return tamanho_max_seq;
    }

    return tamanho_max_seq;
}


