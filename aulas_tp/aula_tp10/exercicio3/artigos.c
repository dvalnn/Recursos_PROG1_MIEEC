#include <stdio.h>
#include <string.h>

#include "artigos.h"

int leArtigos(artigo armazem[], char *nomeFicheiro){
    FILE *f;

    f = fopen(nomeFicheiro, "rb");
    
    if(f == NULL){
        printf("Error opening file.\n");
    }

    /*
    printf("testing fread() function: \n");
    while ( fread(&armazem[numlido], sizeof(artigo), 1, f) == 1)
    {
        printf("tipo: %s\n",    armazem[numlido].tipo);
        printf("marca: %s\n",   armazem[numlido].marca);
        printf("modelo: %s\n",  armazem[numlido].modelo);
        printf("preço: %.2f€\n",armazem[numlido].preco);
        printf("stock: %d\n\n", armazem[numlido].stock);
    }
    */

    short i;
    for (i = 0; i < 10; i++)
        fscanf(f, "%s %s %s %f %d", armazem[i].tipo, armazem[i].marca, armazem[i].modelo, &armazem[i].preco, &armazem[i].stock);

    fclose(f);

    return i;
}

int totalArtigos(artigo armazem[], int n, char *marca, char *modelo){
    for (short i = 0; i < n; i++)
         if (strcmp(armazem[i].marca, marca) == 0 && strcmp(armazem[i].modelo, modelo) == 0)
            return armazem[i].stock;
    return -1;
}

void alertaArtigos(artigo armazem[], int n){
    printf("---Artigos com poucas unidades em stock---\n");
    short poucoStock = 0;
    for (short i = 0; i < n; i++)
        if (armazem[i].stock < 10){
        printf("artigo: \"%s\" | marca: \"%s\" | modelo: \"%s\" quantidade em stock: %d | preço por item: %.2lf€\n", armazem[i].tipo, armazem[i].marca, armazem[i].modelo, armazem[i].stock, armazem[i].preco);
        poucoStock++;
        }
    if(!poucoStock) printf("Nenhum artigo se encontra com menos de 10 artigos em stock");
}

void ordenaArtigos(artigo armazem[], int n){
    int pos = 0, imin, i;
    artigo aux;

    while (pos < n - 1){
        imin = pos;
        i    = pos + 1;

        while (i < n){
            if (armazem[i].stock < armazem[imin].stock) imin = i;
            i++;
        }
        if (imin != pos)
        {
            aux = armazem[pos];
            armazem[pos] = armazem[imin];
            armazem[imin] = aux;
        }
    pos++;
    }   
}

void escreveArtigos(artigo armazem[], int n){
    for (short i = 0; i < n; i++)
        printf("Artigo %d: %s %s %s %.2f | stock: %d\n", i, armazem[i].tipo, armazem[i].modelo, armazem[i].marca, armazem[i].preco, armazem[i].stock);
}