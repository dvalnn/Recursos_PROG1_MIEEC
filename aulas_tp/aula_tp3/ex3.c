#include <stdio.h>

int main()
{
    int num;
    printf("\nInsira um número: ");
    scanf("%d", &num);
    
    if      (num < -10)                 printf("o número pertence ao intervalo ]-oo, -10[\n");
    else if (num >= 5  && num < 45)     printf("o número pertence ao intervalo [5, 45[\n");
    else if (num > 120 && num <=245 )   printf("o número pertence ao intervalo ]120, 245]\n");
    else                                printf("o número inserido não pertence a nenhum dos intervalos definidos.");

    printf("\n");

return 0;
}