#include <stdio.h>
#include <string.h>

#define  TAMANHOSTRING 101

int compacta(char orig[], int N, char dst[]);

int main()
{
    char strOriginal[TAMANHOSTRING];
    char strCompacta[TAMANHOSTRING] = {' '};
    short sizeDst;

    printf("Insira uma string de charecteres.\n");
    fgets(strOriginal, TAMANHOSTRING, stdin);

    sizeDst = compacta(strOriginal, TAMANHOSTRING, strCompacta);
    
    printf("A string compactada tem tamanho %d e é a seguinte: ", sizeDst);
    puts(strCompacta);

return 0;
}

int compacta(char orig[], int n, char dst[])
{
    short j = 0;

    for (short i = 0; i < n; i++)
    {
        if(orig[i] != orig[i+1])
        {
            dst[j] = orig[i];
            j++;
        if(orig[i+1] == '\0') break;
        }
    }

return j;
}
