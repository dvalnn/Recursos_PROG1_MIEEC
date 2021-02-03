#include <stdio.h>

int main()
{
    int num;
    printf("\nInsira um número: ");
    scanf("%d", &num);

    if(num%2 == 0) printf("%d é par\n\n", num);
    else printf("%d é ímpar\n\n", num);
    
    return 0;
}