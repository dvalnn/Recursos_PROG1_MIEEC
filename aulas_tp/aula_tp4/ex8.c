#include <stdio.h>

int num_primo(int num_a_testar);

int main()
{
    int user_input, num_primos_econtrados, num_atual_testar;
    
    num_atual_testar      = 2;
    num_primos_econtrados = 0;
    
    printf("Insira o numero de numeros primos que pretende calcular: ");
    scanf("%d", &user_input);
    
    printf("\n");

    while(1)
    {
        if (num_primo(num_atual_testar) == 1)
        {
            num_primos_econtrados++;
            printf("%d\n", num_atual_testar);
        }
        
        if (num_primos_econtrados == user_input)
            break;
        
        num_atual_testar++;
    }
    
    printf("\n");
    
return 0;
}


int num_primo(int num_a_testar)
{
    for(int i = 1; i < num_a_testar; i++)
    {
        if  (i != 1 && num_a_testar % i == 0)
            return 0; 
    }

return 1;
}

 