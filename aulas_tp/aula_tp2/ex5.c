#include <stdio.h>

void clear();

int main()
{ 
    unsigned long int segundos_inical;
    unsigned int dias, horas, minutos, segundos;
    char ui;
    
    while(ui != 'n')
    {
        printf("\nQuantos segundos? ");
        scanf("%ld", &segundos_inical);

        dias     = segundos_inical / 86400;
        segundos = segundos_inical - (dias * 86400);

        horas     = segundos / 3600;
        segundos -= horas * 3600;

        minutos   = segundos / 60;
        segundos -= minutos * 60;
    
        printf("Isso equivale a:\n");
        printf("%d dias, %d horas, %d minutos e %d segundos\n\n", dias, horas, minutos, segundos);

        printf("Deseja introduzir um novo valor? (y/n): ");
        clear();
        scanf("%c", &ui);
        printf("\n");
    }

return 0;
}

void clear()
{    
  while ( getchar() != '\n' );
}
