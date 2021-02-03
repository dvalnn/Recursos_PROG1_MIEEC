#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define IMG_ADDRESS_SIZE 100
#define MAX_LINE_SIZE 500

int searchForImage(char *texto, char **imgFoundPtr);

int main(){
    
    char linha[MAX_LINE_SIZE];

    char *address;
    address = NULL;

    char *eofptr;
    eofptr = NULL;
    
    int linhaAtual = 0;

    while (1){
        if(eofptr != NULL) break;
        fgets(linha, MAX_LINE_SIZE, stdin);
        eofptr = strstr(linha, "</html>");
        linhaAtual++;
        
        if (searchForImage(linha, &address)){
            char wgetAddress[IMG_ADDRESS_SIZE] = "wget ";
            strcat(wgetAddress, address);
            printf("-----> Image found in \"%s\". Download will now be attempted...\n", address);
            system(wgetAddress);
            printf("\n");
        }
    }
}

int searchForImage(char *texto, char **imgFoundPtr){
    char *Auxptr;

    *imgFoundPtr = strstr(texto, "src=");
    if (*imgFoundPtr == NULL) return 0;
    
    (*imgFoundPtr) += 5;
    Auxptr = strchr(*imgFoundPtr, '\"');

   (*(Auxptr++)) = '\0'; 
    return 1;
}