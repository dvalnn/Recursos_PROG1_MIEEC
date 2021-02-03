#include <stdio.h>

int main ()
{
    int user_input, soma;

    printf("Introduza um número: ");
    scanf("%d", &user_input);

    soma = 0;
    
    if (user_input < 0) user_input = 0 - user_input;

    while (user_input >= 1)
    {
        soma += user_input % 10;
        user_input /= 10;
    }
    
    printf("A soma dos algarismo do número introduzido é: %d\n", soma);

return 0;
}