#include <stdio.h>

int hoursMin(int totalMins, int *hours, int *minutes);

int main()
{

    int minutos_total;
    int horas = 0;
    int minutos = 0;
    short dias = 0;

    printf("Insira o total de minutos: ");
    scanf("%d", &minutos_total);

    dias = hoursMin(minutos_total, &horas, &minutos);

    printf("%d minutos correspondem a %dh:%dm", minutos_total, horas, minutos);

    if (dias)   printf(", que é superior a 1 dia.\n");
    else        printf(", que não é superior a 1 dia.\n");

return 0;
}

int hoursMin(int totalMins, int *hours, int *minutes)
{
    *hours = totalMins / 60;
    *minutes = totalMins % 60;

    if (*hours > 24) return 1;
    else return 0;
}
