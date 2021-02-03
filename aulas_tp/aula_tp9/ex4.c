#include <stdio.h>

int mdc(int x, int y); //máximo divisor comum entre x e y 
int main(){

    int x, y;
    
    printf("Introduza dois inteiros: ");
    scanf("%d %d", &x, &y);
    printf("MDC(%d, %d) = %d\n", x, y, mdc(x,y));

return 0;
}



int mdc(int x, int y){ // cálculo recursivo máximo divisor comum entre dois inteiros x e y
    if (y == 0) return x;
    else return mdc(y, x % y);
}
