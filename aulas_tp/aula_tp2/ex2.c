#include <stdio.h>

int main()
{
    float celsius, kelvin, farenheit;

    printf("introduza um valor de temperatura em graus celsius: ");
    scanf("%f %f %f", &celsius, &kelvin, &farenheit);
    
    printf("%.2f ºC = %.2f K\n", celsius, celsius + 273.15);
    printf("%.2f ºC = %.2f F\n", celsius, celsius * (9/5) + 32);

    return 0;
}
