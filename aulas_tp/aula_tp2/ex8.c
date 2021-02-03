#include <stdio.h>

int main()
{
    float user_input, resto;
    int parte_inteira;
    
    printf("\nIntroduza um valor: ");
    scanf("%f", &user_input);
    
    parte_inteira = user_input + .5;
    
    printf("arredondamento do valor que inseriu: %d\n", parte_inteira);
    printf("numeros pares mais próximos do valor arredondado: %d\t%d\n\n", parte_inteira - 2 + parte_inteira%2, parte_inteira + 2 - parte_inteira%2);

return 0;
}