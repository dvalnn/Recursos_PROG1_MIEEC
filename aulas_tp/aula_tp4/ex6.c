#include <stdio.h>

int main()
{

    int user_input;

    printf("escreva um numero inteiro: ");
    scanf("%d", &user_input);

    if (user_input < 0) user_input = 0 - user_input;

    printf("o seu número ao contrário é: ");
    
    while (user_input >= 1)
    {
        printf("%d", user_input % 10);
        user_input /= 10;
    }

    printf("\n");

return 0;
}

