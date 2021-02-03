#include <stdio.h>

int main()
{
    int user_input;

    printf("escreva um numero inteiro: ");
    scanf("%d", &user_input);

    for(int i = 2; i <= user_input; i++)
    {
        if (user_input % i == 0)
        {
            user_input /= i;
            printf(" %d", i);
            i--;
        } 
    }

    printf("\n");
    
return 0;
}