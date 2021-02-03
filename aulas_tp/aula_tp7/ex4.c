#include <stdio.h>
#include <math.h>

void cartesianas_polares(float x, float y, float *r, float *theta);
void polares_cartesianas(float r, float theta, float *x, float *y);

int main()
{

    float x, y, r, teta;
    char ui;

    x = 0;
    y = 0;
    r = 0;
    teta = 0;
    
    printf("Qual o tipo de coordenadas que pretende introduzir?(c / p) " );
    scanf("%c", &ui);

    printf("Introduza o conjunto de coordenadas: ");
    if (ui == 'c')
    {
        scanf("%f %f", &x, &y);
        cartesianas_polares(x, y, &r, &teta);
    }
    else 
    {
        scanf("%f %f", &r, &teta);
        polares_cartesianas(r, teta, &x, &y);
    }

    printf("Coordenadas cartesianas: %.2fx %.2fy\n", x, y);
    printf("Coordenadas polares    : %.2f  %.2f\n", r, teta);

return 0;
}

void polares_cartesianas(float r, float theta, float *x, float *y)
{
    *x = r * cos(theta);
    *y = r * sin(theta);
}

void cartesianas_polares(float x, float y, float *r, float *theta)
{
    *r = sqrt(pow(x,2)+pow(y,2));
    *theta = atan2(y,x);
}
