#include <stdio.h>


int main()
{   
    int x, y;

    printf("Indique um ponto (x,y): ");
    scanf("%d %d", &x, &y);

    if(x > 0 && y > 0)
        printf("o ponto indicado pertençe ao 1º quadrante\n");
    else if(x < 0 && y > 0)
        printf("o ponto indicado pertençe ao 2º quadrante\n");
    else if(x < 0 && y < 0)
        printf("o ponto indicado pertençe ao 3º quadrante\n");
    else if(x > 0 && y < 0)
        printf("o ponto indicado pertençe ao 4º quadrante\n");
    else printf("coordenadas inválidas\n");
    
return 0;
}