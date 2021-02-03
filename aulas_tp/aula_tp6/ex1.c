#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main()
{
    
    short x, lancamentos[6] = {0};

    srand(time(NULL));

    for (short i = 0; i < 30; i++)
    {
        x = rand() % 6 + 1;

        switch (x)
        {
        case 1:
            lancamentos[0]++;
            break;
        case 2:
            lancamentos[1]++;
            break;
        case 3:
            lancamentos[2]++;
            break;
        case 4:
            lancamentos[3]++;
            break;
        case 5:
            lancamentos[4]++;
            break;
        case 6:
            lancamentos[5]++;
            break;
        default:
            break;
        }
    }

    printf("\nHistograma dos 30 lançamentos:");

    for (short i = 0; i < 6; i++)
    {
      printf("\nFace %d - ", i + 1);
      
      for (short j = 0; j < lancamentos[i]; j++)
      {
          printf("*");
      }   
    }
    
    printf("\n");
return 0;
}