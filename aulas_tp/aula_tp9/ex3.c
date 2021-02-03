#include <stdio.h>

int multiplicacao(int primeiroNumero, int segundoNumero);

int main(){
    
    int x, y;
    printf("Insira dois inteiros: ");
    scanf("%d %d", &x ,&y);
    printf("%d * %d = %d\n", x, y, multiplicacao(x,y));

return 0;
}

int multiplicacao(int primeiroNumero, int segundoNumero){
    if (segundoNumero == 0) return 0;
    if (primeiroNumero < 0) return 0 - (multiplicacao(0 - primeiroNumero, segundoNumero));
    if (segundoNumero < 0 ) return 0 - (multiplicacao(primeiroNumero, 0 - segundoNumero)); 
    else return primeiroNumero + multiplicacao(primeiroNumero, segundoNumero - 1);
}