#include <stdio.h>
#include <string.h>

#define FRASE_MAX_SIZE 200
#define PALAVRA_MAX_SIZE 10

int conta(char *frase, char *palavra);
void clearBuffer();

int main(){
        
    char frase[FRASE_MAX_SIZE]     = "\0";
    char palavra[PALAVRA_MAX_SIZE] = "\0";

    printf("\n");

    while (1){
                
        printf("Introduza uma frase: ");
        fgets(frase, FRASE_MAX_SIZE, stdin);
        
        if(frase[0] == '.') return 0;

        printf("Introduza uma palavra: ");
        scanf("%s", palavra);

        printf("A palavra \"%s\" é repetida %d na frase introduzida.\n\n", palavra, conta(frase, palavra));
        clearBuffer();
    }

return 0;
}

int conta(char *frase, char *palavra){
    short conta = 0;
    short wordsize = strlen(palavra);

    while (strlen(frase) > wordsize){
        frase = strstr(frase, palavra);
        if (frase == NULL) break;
        if (frase[-1] == ' ' && frase[wordsize] == ' ') conta ++;
        frase += wordsize;
    }
    return conta;
}

void clearBuffer(){
    while (getchar()!='\n')
        continue;
}