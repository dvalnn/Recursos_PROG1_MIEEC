#include <stdio.h>

int main ()
{
    short bit3, bit2, bit1, bit0, decimal;

    printf("\n\nintroduza 4 bits binários separados por um espaço: ");
    scanf("%hd %hd %hd %hd",&bit3, &bit2, &bit1, &bit0);
    printf("%hd %hd %hd %hd\n",bit3, bit2, bit1, bit0);

    decimal = (short) bit1*8 + bit2*4 + bit1*2 + bit0;

    printf("O valor na base decimal: %d", decimal);
    printf("\nO valor na base octal: %o", decimal);
    printf("\nO valor na base hexadecimal: %x\n\n", decimal);
}
