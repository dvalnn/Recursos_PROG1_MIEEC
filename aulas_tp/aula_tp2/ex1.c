#include <stdio.h>

#define pi 3.1416

int main()
{
    int raio, temp;
   
    printf("\nBem vindo ao calculador de áreas e perímetros de circunferências!\n");
    printf("Insira o valor desejado para o raio: ");
    scanf("%d",&raio);
    
    printf("perímetro: %.3f\n", 2*pi*raio);
    printf("área: %.3f\n\n", pi*raio*raio);

    return 0;
}