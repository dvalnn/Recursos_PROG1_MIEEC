#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void quociresto(int dividendo, int divisor, int *quociente, int *resto);
int soma(int n);
short par(int n);

int main()
{
    int quociente, resto, num1, num2;
    char user_input[6];

    printf("Intoduza um valor inteiro: ");
    fgets (user_input, 6, stdin);
    num1 = atoi  (user_input);

    printf("Intoduza outro valor inteiro: ");
    fgets (user_input, 6, stdin);
    num2 = atoi  (user_input);

    if (par(num1))
        printf("O número %d é par\n", num1);

    if (par(num2))
        printf("O número %d é par\n", num2);
  
    printf("A soma dos dígitos de %d é %d\n", num1, soma(num1));
    printf("A soma dos dígitos de %d é %d\n", num2, soma(num2));

    quociresto(num1, num2, &quociente, &resto);
    printf("O resultado da divisão inteira de %d por %d é %d, com resto igual a %d\n", num1, num2, quociente, resto);

return 0;
}

void quociresto(int dividendo, int divisor, int *quociente, int *resto)
{
    *quociente = 0;

    while (dividendo >= divisor)
    {
        dividendo -= divisor;
        (*quociente)++;
    }
    
    *resto = dividendo; 
}

short par(int n)
{   
    return !(n & 1);    
}

int soma(int n)
{
    short soma = 0;
    int  var1;

    while (n > 0)
    {
        var1  = n * pow(10, -1);
        soma += n - var1 * 10;
        n *= pow(10, -1);
    }
    
return soma;
}
