#include <stdio.h>
#include <string.h>

#define FRASE_SIZE   50
#define PALAVRA_SIZE 20

int main(){

    char frase[FRASE_SIZE][PALAVRA_SIZE];
    char *biggestWord;
    
    biggestWord = frase[0];
    short wordAmmount = 0;
    short wordSize = 0;

    printf("Frase? ");

    for (short i = 0; i < FRASE_SIZE; i++)
    {
        scanf("%s", frase[i]);
        wordAmmount++;
        if(frase[i][strlen(frase[i]) - 1] == '.') {
            frase[i][strlen(frase[i]) - 1] = '\0';
            break;
        }
    }

    for (short i = 0; i < wordAmmount; i++)
    {
        wordSize += strlen(frase[i]);
        if (strlen(frase[i]) > strlen(biggestWord))
            biggestWord = frase[i];   
    }
    
    printf("Numero de palavras: %hd\n", wordAmmount);
    printf("Maior palavra: %s\n", biggestWord);
    printf("Comprimento médio: %.1f\n", wordSize/(float) wordAmmount);

return 0;
}