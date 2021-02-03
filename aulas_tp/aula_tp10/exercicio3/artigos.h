#include <stdio.h>
#include <string.h>

#define STRLEN 30

typedef struct artigo{

    char tipo[STRLEN]; 
    char marca[STRLEN];
    char modelo[STRLEN];
    
    float preco;
    int stock;
}artigo;

int leArtigos(artigo armazem[], char *nomeFicheiro);

int totalArtigos(artigo armazem[], int n, char *marca, char *modelo);

void alertaArtigos(artigo armazem[], int n);

void ordenaArtigos(artigo armazem[], int n);

void escreveArtigos(artigo armazem[], int n);
