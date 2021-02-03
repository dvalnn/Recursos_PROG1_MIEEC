#include <stdio.h>

int main ()
{
    float altura;

    printf("\nQual a altura da pessoa? ");
    scanf("%f", &altura);
    
    if (altura < 1.3)
        printf("Essa pessoa é baixíssima.\n");
    else if (altura >= 1.3 && altura <1.6)
        printf("Essa pessoa é baixa.\n");
    else if (altura >= 1.6 && altura < 1.75)
        printf("Essa pessoa é mediana.\n");
    else if (altura >= 1.75 && altura < 1.9)
        printf("Essa pessoa é alta.\n");
    else if (altura >= 1.9)
        printf("Essa pessoa é altíssima.\n");
    else 
        printf("Altura inválida\n");
    printf("\n");
return 0;
}