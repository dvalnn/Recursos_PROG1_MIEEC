#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define TENTATIVAS 6
#define MAX 100

void imprimeForca(int erros);
void carregaPalavras(char *ficheiro, char palavras[][MAX], int *tamanho);
void obfuscaPalavra(char* palavra, char *nova);
int letraNaPalavra(char a, char* palavra);
void revelaLetras(char letra, char *palavra, char *obfuscada);
int advinhaLetras(char a, char* advinhadas, int* posicaoAdvinhadas); // ALTERAÇÕES: adicionar definição da funcão
int joga(char *palavra, char *palavra_obfuscada, char* advinhadas, int* posicaoAdvinhada);

int main()
{
	char *dados = "palavras.txt";
	char palavras[100][MAX];
	char palavra[MAX], palavra_obfuscada[MAX];
	char advinhadas[27]; // ALTERAÇÕES: cache de letras advinhadas
	int i, tamanho, contador, posicaoAdvinhadaNum = 0;
	int *posicaoAdvinhada = &posicaoAdvinhadaNum;

	srand(time(NULL));

	carregaPalavras(dados, palavras, &tamanho);
	if(tamanho != 0)
	{
		printf("\nBem vindo ao jogo da forca! \n");

		// ALTERAÇÕES: permitir jogar as vezes que se quiser
		while(1){
			char resposta;
			strcpy( palavra, palavras[rand()%tamanho]);
			obfuscaPalavra(palavra, palavra_obfuscada);

			contador = joga(palavra,palavra_obfuscada, advinhadas, posicaoAdvinhada);
			if(contador < TENTATIVAS)
				printf("Parabens!\n");
			else
				printf("Perdeste... A palavra era %s\n",palavra);

			// ALTERAÇÕES: poder jogar de novo	
			printf("Queres jogar outra vez? (s/n)\n");
			scanf(" %c", &resposta);
			if(resposta == 'n')
				break;
			
			short i = 0;
			while (advinhadas[i] != '\0'){
				advinhadas[i] = '\0';
				i++;
			}

			(*posicaoAdvinhada) = 0;
		}
	}

	return 0;
}

void imprimeForca(int erros)
{
	if (erros == 0)
	{
		printf ("	+------+\n");
		printf ("	 |   |\n");
		printf ("	     |\n");
		printf ("	     |\n");
		printf ("	     |\n");
		printf ("	     |\n");
		printf ("	============\n");
	}
	else if (erros == 1)
	{
		printf ("	+------+\n");
		printf ("	 |   |\n");
		printf ("	 o   |\n");
		printf ("	     |\n");
		printf ("	     |\n");
		printf ("	     |\n");
		printf ("	============\n");
	}
	else if (erros == 2)
	{
		printf ("	+------+\n");
		printf ("	 |   |\n");
		printf ("	 o   |\n");
		printf ("	 |   |\n");
		printf ("	     |\n");
		printf ("	     |\n");
		printf ("	============\n");
	}
	else if (erros == 3)
	{
		printf ("	+------+\n");
		printf ("	 |   |\n");
		printf ("	 o   |\n");
		printf ("	/|   |\n");
		printf ("	     |\n");
		printf ("	     |\n");
		printf ("	============\n");
	}
	else if (erros == 4)
	{
		printf ("	+------+\n");
		printf ("	 |   |\n");
		printf ("	 o   |\n");
		printf ("	/|\\  |\n");
		printf ("	     |\n");
		printf ("	     |\n");
		printf ("	============\n");
	}
	else if (erros == 5)
	{
		printf ("	+------+\n");
		printf ("	 |   |\n");
		printf ("	 o   |\n");
		printf ("	/|\\  |\n");
		printf ("	/    |\n");
		printf ("	     |\n");
		printf ("	============\n");
	}
	else if (erros == 6)
	{
		printf ("	+------+\n");
		printf ("	 |   |\n");
		printf ("	 o   |\n");
		printf ("	/|\\  |\n");
		printf ("	/ \\  |\n");
		printf ("	     |\n");
		printf ("	============\n");
	}

}

void carregaPalavras(char *ficheiro, char palavras[][MAX], int *tamanho){
	FILE *wordSource;
    wordSource = fopen(ficheiro, "r");
    
    if (wordSource == NULL){
        printf("\n\tErro ao abrir o ficheiro com as palavras.\n");
        return;
    }

    for (int i = 0; i < MAX; i++){
        if(fscanf(wordSource, "%s", palavras[i]) == EOF){
            (*tamanho) = i;   
            break;
        }
    }
}

void obfuscaPalavra(char* palavra, char *nova)
{
	int i = 0;

	strcpy(nova,palavra);
	while ( nova[i] != '\0' )
	{
		nova[i] = '*';
		i++;
	}
}

int letraNaPalavra(char a, char* palavra)
{
	int i = 0;
	while ( palavra[i] != '\0' )
	{
		if ( palavra[i] == a )
			return 1;
		i++;
	}
	return 0;
}

//ALTERAÇÕES: implementar cache de letras advinhadas
int letraAdvinhada(char a, char* advinhadas, int* posicaoAdvinhada){

	int i = 0;
	while (advinhadas[i] != '\0'){
		if(advinhadas[i] == a){
			return 1;
		}
		i++;
	}
	advinhadas[(*posicaoAdvinhada)++] = a;
	return 0;

}

void revelaLetras(char letra, char *palavra, char *obfuscada){

    short i = 0;
    while (palavra[i] != '\0'){
        if(palavra[i] == letra){
            obfuscada[i] = letra;
        }
        i++;
    }
}

int joga(char *palavra, char *palavra_obfuscada, char* advinhadas, int* posicaoAdvinhada){
    int erros = 0;
    char letra;
    printf("\n*** Começando um novo jogo com uma palavra escolhida aleatoriamente ***\n");

    printf("\npalavra em jogo: %s\n", palavra_obfuscada);
    imprimeForca(erros);

    while (erros < TENTATIVAS){
        printf("\nLetra? ");
        scanf(" %c", &letra);
        
		// ALTERAÇẼS: cache de letras advinhadas
		if(letraAdvinhada(letra, advinhadas, posicaoAdvinhada)){
			printf("Essa letra já foi advinhada, volta a tentar\n");
			imprimeForca(erros);
			continue;
		}

        if(!letraNaPalavra(letra, palavra)){
            erros++;
            printf("A letra %c não existe na palavra: \n", letra);
            printf("Tentativas restantes: %d\n", TENTATIVAS - erros);
        }else{
            printf("A revelar letra(s) %c na palavra: \n", letra);
            revelaLetras(letra, palavra, palavra_obfuscada);    
        }

		// ALTERAÇÕES: imprime as letras advinhadas até agora
		printf("Letras advinhadas: ");
		short i = 0;
		while (advinhadas[i] != '\0'){
			printf("%c, ", advinhadas[i]);
			i++;
		}

		printf("\n\t%s\n", palavra_obfuscada);
		imprimeForca(erros);

        if (strcmp(palavra, palavra_obfuscada) == 0) return erros;       
    }
	
    return erros;
}
