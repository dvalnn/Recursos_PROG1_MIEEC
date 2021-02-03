#include <stdio.h>
#include <math.h>

int main()
{
    float ci, j;
    int n;
    
    printf("escreva capital inicial: ");
    scanf("%f", &ci);
    
    printf("escreva a taxa de juro: ");
    scanf("%f", &j);
    
    printf("escreva o numero de anos: ");
    scanf("%d", &n);

    printf ("o capital acumulado ao fim de %d anos é de %.3f\n", n, ci * pow((1+j/100), n) );
    
    return 0;
}