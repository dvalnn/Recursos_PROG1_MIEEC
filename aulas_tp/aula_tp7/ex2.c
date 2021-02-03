#include <stdio.h>

void ordena(int *valorA, int *valorB, int *valorC);

int main()
{
    int a, b, c;
    printf("Insira 3 valores inteiros para ordenar: ");
    scanf("%d %d %d", &a, &b, &c);

    ordena(&a, &b, &c);

    printf("Valores ordenados: %d %d %d\n", a, b, c);
   
return 0;
}

void ordena(int *valorA, int *valorB, int *valorC)
{   
    int temp = 0;

    printf("inicial: %d %d %d\n", *valorA, *valorB, *valorC);

    if (*valorA > *valorC)
    {
        printf("A > C: %d %d %d\n", *valorA, *valorB, *valorC);
        
        temp = *valorA;
        *valorA = *valorC;
        *valorC = temp;
        
        printf("A < C: %d %d %d\n", *valorA, *valorB, *valorC);
    }
           
    if (*valorA > *valorB)
    {
        printf("A > B: %d %d %d\n", *valorA, *valorB, *valorC);
        temp = *valorA;
        *valorA = *valorB;
        *valorB = temp;
        printf("A < B: %d %d %d\n", *valorA, *valorB, *valorC);
    }

    if (*valorB > *valorC)
    {   
        printf("B > C: %d %d %d\n", *valorA, *valorB, *valorC);
        temp = *valorC;
        *valorC = *valorB;
        *valorB = temp;
        printf("B < C: %d %d %d\n", *valorA, *valorB, *valorC);
    }
}