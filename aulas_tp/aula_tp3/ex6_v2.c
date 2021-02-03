#include <stdio.h>
#include <math.h>

double casas_decimais(double x, int i);
void clear_digits(int n);

int main()
{
    int    num1, num2, casasDecimais;
    double resultado;
    char   operador;

    printf("\nBem vindo! Esta calculadora realiza operações elementares com 2 operandos.\n"); 
    printf("(pressione \"Enter\" para continuar, para terminar o programa pressione \"e\")");
    
    while (getchar() != 'e')
    {
        operador = '\n';

        printf("\nIntroduza uma operação a realizar: ");
        scanf("%d %c %d", &num1, &operador, &num2);

        switch (operador)
        {
        case '*':
            printf("%d", num1 * num2);
            break;
        
        case '/':
            resultado = (double)num1 / num2;
            
            printf("Apresentar o resultado com quantas casas decimais?: ");
            scanf("%d", &casasDecimais);
            
            printf("%.20lf", casas_decimais(resultado, casasDecimais));
            
            casasDecimais = 20 - casasDecimais;
            clear_digits(casasDecimais);
            
            break;
        
        case '+':
            printf ("%d", num1 + num2);
            break; 
        
        case '-':
            printf("%d",num1 - num2);
            break;
        
        default:
            printf("Erro a realizar a operação\n");
            break;
        }
    }

return 0;
}

//método para arredondamento dinâmico de acordo com input definido pelo utilizador
double casas_decimais(double x, int i)
{
    return floor(pow(10, i) * x) / pow(10, i); 
} 
    /*  função floor() devolve a parte inteira da variável que leva como argumento
        neste caso, ao multiplicar o argumento por uma potência de base 10 antes  e após utilizar
        a função floor, podemos salvar um número de casas decimais à escolha */

void clear_digits(int n)
{
    int i;
    for(i=0; i < n; i++)
    {
        printf("\b");
    }
    for(i=0; i < n; i++)
    {
        printf(" ");
    }  
}