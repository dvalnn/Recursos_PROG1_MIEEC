#include <stdio.h>

float peso_ideal(float a, char s);

int main()
{
    float altura;
    char sexo;

    printf("Insira altura (1.x) e sexo(M/F) da pessoa: ");
    scanf("%f %c", &altura, &sexo);

    printf ("O peso ideal será %.2f kg\n",peso_ideal(altura, sexo));

return 0;
}

float peso_ideal(float a, char s)
{

    if      (s == 'M')  return 72.7 * a - 58;
    else if (s == 'F')  return 62.1 * a - 44.7;
    else                return 0;
}