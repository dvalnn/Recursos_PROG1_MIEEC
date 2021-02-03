#include "complexos.h"

#include <stdio.h>
#include <math.h>

complexo leComplexo(){
    complexo newObject;

    printf("Introduza o número complexo no formato <a b>, com <a> e <b> inteiros.\n");
    printf("a - parte real do numero complexo.\n");
    printf("b - parte imaginária do numero complexo.\n");
    printf("Input: ");
    scanf("%d %d", &newObject.parteReal, &newObject.parteImag);

return newObject;
}

void escreveComplexo(complexo c){
    printf("%d +i%d", c.parteReal, c.parteImag);
}

complexo somaComplexo(complexo c1, complexo c2){
    complexo soma;

    soma.parteReal = c1.parteReal + c2.parteReal;
    soma.parteImag = c1.parteImag + c2.parteImag;

return soma;
}

double modComplexo(complexo c){
    return sqrt(pow(c.parteReal, 2) + pow(c.parteImag, 2));
}

double argComplexo(complexo c){
    return asin(c.parteImag/modComplexo(c));
}
