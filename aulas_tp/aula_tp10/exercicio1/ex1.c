#include <stdio.h>
#include "complexos.h"

int main(){
    complexo z1;
    complexo z2;
    complexo soma;

    z1 = leComplexo();
    
    printf("z1 = ");
    escreveComplexo(z1);
    printf("\n\n");

    z2 = leComplexo();
    
    printf("z2 = ");
    escreveComplexo(z2);
    printf("\n");
    
    soma = somaComplexo(z1, z2);
    
    printf("\nz1 + z2 = ");
    escreveComplexo(soma);
    printf("\n"); 

    printf("\nmódulo de z1 = %.2lf\n", modComplexo(z1));
    printf("módulo de z2 = %.2lf\n", modComplexo(z2));

    printf("\nargumento angular de z1 = %.2lf\n", argComplexo(z1));
    printf("argumento angular de z2 = %.2lf\n", argComplexo(z2));
}