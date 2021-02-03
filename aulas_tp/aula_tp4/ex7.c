#include <stdio.h>

int main()
{

float A, B, Ataxa, Btaxa; 
int anos = 0;


printf("Pais A (pop/taxa): ");
scanf("%f %f", &A, &Ataxa);
printf("Pais B (pop/taxa): ");
scanf("%f %f", &B, &Btaxa);



while (A > B)
{
    A += A * Ataxa / 100;
    B += B * Btaxa / 100;
    anos++;
}

printf("Populacao de B ultrapassara a de A em %d anos.\n", anos);

return 0;
}