#include <stdio.h>

int main()
{

int numero_inserido;

printf("\nInsira o número desejado: ");
scanf("%d", &numero_inserido);

int centenas = numero_inserido / 100; //349 ---> 3 
int unidades = numero_inserido % 10; //349 ---> 9

if (unidades == centenas) printf("o número inserido é capicua\n");
else                      printf("o número inserido não é capicua.\n");

printf("\n");

return 0;
}