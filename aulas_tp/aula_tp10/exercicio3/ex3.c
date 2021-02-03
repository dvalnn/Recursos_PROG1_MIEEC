#include <stdio.h>
#include <string.h>

#include "artigos.h"

#define ARMAZEM_SIZE 100

int main(){
    char file[] = "artigos.txt";
    
    artigo armazem[ARMAZEM_SIZE];
    int sizeArmazem;

    sizeArmazem = leArtigos(armazem, file);

    printf("artigos lidos %d\n\n", sizeArmazem);
    
    printf("----Artigos por ordenar----");
    escreveArtigos(armazem, sizeArmazem);

    ordenaArtigos(armazem, sizeArmazem);

    printf("\n\n----Artigos após ordenar----");
    escreveArtigos(armazem, sizeArmazem);
    //alertaArtigos(armazem, sizeArmazem);

    //printf("\nTotal de \"SuperTV S-30\" em stock: %d\n", totalArtigos(armazem, sizeArmazem, "SuperTV" , "S-30"));

return 0;
}