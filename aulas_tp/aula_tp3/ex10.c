#include <stdio.h>

void centenas_convert(int centenas);
void dezenas_convert(int dezenas);
void unidades_convert(int unidades);

int main()
{   
    int user_input, centenas, dezenas, unidades;

    printf("\nInsira um número: ");
    scanf("%d", &user_input);

    centenas = user_input / 100;
    dezenas  = (user_input % 100) /10; //big brain @happymyers aka Gonçalo
    unidades = user_input % 10;

    centenas_convert(centenas);
    dezenas_convert (dezenas );
    unidades_convert(unidades);

    printf("\n\n");

return 0;
}

void centenas_convert(int centenas)
{
    switch (centenas)
    {
    case 1:
        printf("C");
        break;
    case 2:
        printf("CC");
        break;
    case 3:
        printf("CCC");
        break;
    case 4:
        printf("CD");
        break;
    case 5:
        printf("D");
        break;
    case 6:
        printf("DC");
        break;    
    case 7:
        printf("DCC");
        break;
    case 8:
        printf("DCCC");
        break;
    case 9:
        printf("CM");
        break;
    default:
        printf("");
        break;
    }
}

void dezenas_convert(int dezenas)
{
    switch (dezenas)
    {
    case 1:
        printf("X");
        break;
    case 2:
        printf("XX");
        break;
    case 3:
        printf("XXX");
        break;
    case 4:
        printf("XL");
        break;
    case 5:
        printf("L");
        break;
    case 6:
        printf("LX");
        break;    
    case 7:
        printf("LXX");
        break;
    case 8:
        printf("LXXX");
        break;
    case 9:
        printf("XC");
        break;
    default:
        printf("");
        break;
    }
}

void unidades_convert(int unidades)
{
    switch (unidades)
    {
    case 1:
        printf("I");
        break;
    case 2:
        printf("II");
        break;
    case 3:
        printf("III");
        break;
    case 4:
        printf("IV");
        break;
    case 5:
        printf("V");
        break;
    case 6:
        printf("VI");
        break;    
    case 7:
        printf("VII");
        break;
    case 8:
        printf("VIII");
        break;
    case 9:
        printf("IX");
        break;
    default:
        printf("");
        break;
    }
}
