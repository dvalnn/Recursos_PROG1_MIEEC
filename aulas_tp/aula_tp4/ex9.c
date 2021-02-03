#include <stdio.h>

int main()
{
    short user_input, linha_atual = 1;
    
    printf("\nInsira o número de linhas para a sua árvore: ");
    scanf ("%hd", &user_input);
    printf("\n");

    if (user_input < 4)
    {
        printf("A altura introduzida para a árvore é muito baixa, introduza um valor igual ou superior a 4\n\n");
        return 0;
    }

    for (short i = 0; i < user_input - 1; i++)
    {
        for (short i = 0; i < (user_input - 1) - linha_atual; i++)
        {
            printf(" ");
        }
        
        for (short i = 0; i < 2 * linha_atual - 1; i++)
        {
            printf("*");
        }    
        
        linha_atual++;
        printf("\n");
    }
    
    for (short i = 0; i < user_input - 2; i++)
    {
        printf(" ");
    }
    
    printf("*\n\n");
    
return 0;
}
