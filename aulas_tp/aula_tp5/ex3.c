#include <stdio.h>
#include <math.h>

float calculo_dist(float ponto1[], float ponto2[], char r);

int main()
{
    char  r, yeet;
    float ponto1[10], ponto2[10];

    printf("Quais as coordenadas do ponto 1? ");

    for (char i = 1; i < 1; i++)
    {
        scanf ("%f", &ponto1[i-1]);
        yeet = getchar(); 
        r = i;
        if (yeet == '\n') break;
    }

    printf("Quais as coordenadas do ponto 2? ");

    for (char i = 0; i < r; i++)
    {
        scanf("%f", &ponto2[i]);
    }
    
    printf("A distancia entre os dois pontos é: %.3f\n", calculo_dist(ponto1, ponto2, r));

return 0;
}

float calculo_dist(float ponto1[], float ponto2[], char r)
{
    float soma_parcial;

    for (char i = 0; i < r; i++)
    {
        soma_parcial += pow(ponto1[i] - ponto2[i], 2);
    } 

    return sqrt(soma_parcial);
}
