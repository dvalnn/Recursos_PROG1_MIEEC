#include <stdio.h>

int *vmaior(int *valor1, int *valor2);


int main()
{
    int num1, num2;

    printf("Introduza dois valores inteiros: ");
    scanf("%d %d", &num1, &num2);

    printf("Endereço do maior valor: %p", vmaior(&num1, &num2));
    printf("\nValor: %d\n", *vmaior(&num1, &num2));

return 0;
}

int *vmaior(int *valor1, int *valor2)
{
    if ((*valor1) < (*valor2))
    {
       return valor2;
    }
    else return valor1;
}
