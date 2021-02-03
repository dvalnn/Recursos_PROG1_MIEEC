#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define TEXT_SIZE 50

char converte(char c, int shift);
void desloca(char *texto, char* cifra, int shift);
void ataque(char *cifra);

int main(){

    char texto[TEXT_SIZE];
    char cifra[TEXT_SIZE];
    int shift;

    printf("Texto? ");
    fgets(texto, TEXT_SIZE, stdin);

    printf("shift? ");
    scanf("%d", &shift);

    desloca(texto, cifra, shift);
    printf("cifra: %s\n", cifra);

    getchar();

    printf("cifra? ");
    fgets(cifra, TEXT_SIZE, stdin);
    
    ataque(cifra);

return 0;
}

char converte(char c, int shift){
    if (shift < 0)
        for (short i = 0; i < -shift; i++){
            c--;
            if (c < 97) c = 122;
        }
    else
        for (short i = 0; i < shift; i++){
            c++;
            if (c > 122) c = 97;
        }

return c;
}

void desloca(char *texto, char* cifra, int shift){
    for (short i = 0; i < strlen(texto); i++){
        if (isalpha(texto[i])) cifra[i] = converte(texto[i], shift);
        else cifra[i] = texto[i]; 
    }
}

void ataque(char *cifra){
    char cifra2[TEXT_SIZE];

    for (short i = 1; i < 26; i++)
    {
        desloca(cifra, cifra2, i);
        printf("com shift + %d : %s", i, cifra2);
    }
}
