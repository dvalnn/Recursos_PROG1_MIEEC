#include <stdio.h>
#include <math.h>

short soma(short a, short b, short cin);
short carryOut(short a, short b, short cin);

int main()
{
    short cin = 0;
    short a[8], b[8], s[8];
    int num1, num2;

    printf("Introduza o primeiro número em binário (bits): ");
    scanf("%d", &num1);
    printf("Introduza o segundo número em binário (bits):  ");
    scanf("%d", &num2);

    for (short i = 0; i < 8; i++)
    {
        a[i] = num1 % 10;
        num1 /= 10; 
        b[i] = num2 % 10;
        num2 /= 10;
    }

    for (short i = 0; i < 8; i++)
    {
        s[i] = soma(a[i], b[i], cin);
        cin = carryOut(a[i], b[i], cin);
    }

    printf("o resultado da soma dos dois números binário é: ");

    if (cin != 0) printf("%hd ", cin);
    for (short i = 7; i >= 0; i--) printf("%hd", s[i]);
    printf("\n");

return 0;
}

short soma(short a, short b, short cin)
{
    return a ^ b ^ cin;
};

short carryOut(short a, short b, short cin)
{
    return (a & b) | (cin & (a ^ b));
};