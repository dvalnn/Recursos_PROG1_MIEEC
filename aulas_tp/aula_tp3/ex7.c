#include <stdio.h>

int main()
{   
    int n1, n2, n3, temp;
    
    printf("\nInsira 3 valores inteiros para ordenar: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    
    if (n1 > n3)
    {
        temp = n3;
        n3 = n1;
        n1 = temp;
    };
    if (n2 > n3)
    {
        temp = n3;
        n3 = n2;
        n2 = temp;
    }; 
    if (n1 > n2)
    {
        temp = n2;
        n2 = n1;
        n1 = temp;
    };

    printf("Sequência ordenada: %d %d %d \n\n", n1, n2, n3);
    
return 0;
}
