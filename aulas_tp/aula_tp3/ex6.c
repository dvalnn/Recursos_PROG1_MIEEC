#include <stdio.h>

int main()
{
    double num1, num2;
    char operador;
    
    printf("\nBem vindo! Esta calculadora realiza operações elementares com 2 operandos.\n"); 
    printf("(pressione \"Enter\" para continuar, para terminar o programa pressione \"e\")");
    
    while (getchar() != 'e')
    {
        operador = '\n';

        printf("\nIntroduza uma operação a realizar: ");
        scanf("%lf %c %lf", &num1, &operador, &num2);

        switch (operador)
        {
        case '*':
            printf("%.3f\n", num1 * num2);
            break;
        case '/':
            printf("%.3f\n", num1 / num2);
            break;
        case '+':
            printf("%.3f\n", num1 + num2);
            break; 
        case '-':
            printf("%.3f\n", num1 - num2);
            break;
        default:
            printf("Erro a realizar a operação\n");
            break;
        }
    }
return 0;
}