#include <stdio.h>

int main()
{
    int num1, num2;
    
    printf("\nIntruduza um número inteiro: ");
    scanf("%d",&num1);
    printf("Introduza outro número inteiro: ");
    scanf("%d",&num2);

    if(num1 % num2 == 0) printf("%d é múltiplo de %d\n\n", num1, num2);
    else printf("%d não é múltiplo de %d\n\n", num1, num2);

    return 0;
} 





