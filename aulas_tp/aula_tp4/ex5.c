#include <stdio.h>

int main()
{
    char letra_introduzida;
    int a = 0, e = 0, i = 0, o = 0, u = 0;

    printf("\nEscreva uma frase: ");
   
    while (scanf("%c", &letra_introduzida))
    {
        switch (letra_introduzida)
        {
        case 97:   // a
            a += 1;            
            break;
        case 65:   // A
            a += 1;
            break;
        case 101:   // e
            e += 1;
            break;
        case 69:   // E
            e += 1;
            break;
        case 105:   // i
            i += 1;
            break;
        case 73:   // I
            i += 1;
            break;
        case 111:   // o
            o += 1;
            break;
        case 79:   // O
            o += 1;
            break;
        case 117:   // u
            u += 1;
            break;
        case 85:   // U
            u += 1;
            break;    
        default:
            break;
        }
        if(letra_introduzida=='.')
        break;
    }
   
printf("A letra \"a\" foi introduzida %d vezes\n",   a);
printf("A letra \"e\" foi introduzida %d vezes\n",   e);
printf("A letra \"i\" foi introduzida %d vezes\n",   i);
printf("A letra \"o\" foi introduzida %d vezes\n",   o);
printf("A letra \"u\" foi introduzida %d vezes\n\n", u);
return 0;
}