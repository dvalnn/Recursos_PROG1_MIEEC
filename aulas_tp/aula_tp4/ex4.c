#include <stdio.h>

int main()
{
    float user_input, contador, max, min, soma;

    max      = 0;
    min      = 0;
    contador = 0;
    soma     = 0;

    printf("\n");

    while (1)
    {
        printf("Intruduza um número: ");
        
        if (scanf("%f", &user_input) != 1)
        break;

        soma += user_input;
        
        if (contador == 0)
        {
            max = user_input;
            min = user_input;
        }
        
        if (user_input < min)
            min = user_input;
        
        if (user_input > max)
            max = user_input;

        contador++;
    }
    
    printf("\r");
    printf("                             ");
    printf("\nA media dos numeros é %.2f , o maximo e %.2f e o minimo e %.2f.\n\n", soma/contador, max, min);

return 0;
}
