#include <stdio.h>
#include <string.h>

void inverte(char *strOriginal, char *strInvertida);

int main(){
    char strOriginal [31]  = "\0";
    char strInvertida[31]  = "\0";

    printf("Introduza uma frase: ");
    fgets(strOriginal, 31, stdin);

    inverte(strOriginal, strInvertida);

    printf("A frase invertida é \"%s\".\n", strInvertida);

return 0;
}

void inverte(char *strOriginal, char *strInvertida){
    short size = strlen(strOriginal) - 1;
    for (short i = 0; i < size; i++)
        strInvertida[size-i-1] = strOriginal[i]; 
}