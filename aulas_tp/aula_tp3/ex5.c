#include <stdio.h>

int main()
{
    int meses, anos;
    
    printf("insira uma data (mês e ano): ");
    scanf("%d %d", &meses, &anos);

   if (meses == 1 || meses == 3 || meses == 5 || meses == 7 || meses == 8 || meses == 10 || meses == 12)
        printf("o mes %d de %d tem 31 dias", meses, anos);
    else if (meses == 4 || meses == 6 || meses == 9 || meses == 11)
        printf("o mes %d de %d tem 30 dias", meses, anos);
    else if (meses == 2)
    {
        if (anos % 400 == 0)  // verificação se o ano é final de século bissexto
            printf("o mes %d de %d tem 29 dias", meses, anos);
        else if (anos % 4 == 0)  // verificação se o ano é bissexto normal
            printf("o mes %d de %d tem 29 dias", meses, anos);
        else
            printf("o mes %d de %d tem 28 dias", meses, anos);     
    };
    printf("\n\n");

return 0;
}


