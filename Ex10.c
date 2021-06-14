#include<stdio.h> 
#include<string.h> 
#include<ctype.h> 
#include<locale.h>
#include<stdlib.h>

int main(void)
{
	char nome[40];
	int i = 0, letraValida = 0;
	int j;
	do {

		printf("Digite o nome um caractere por vez: \n");
		scanf(" %c", &nome[i]);
		letraValida = nome[i] != '#';
		i++;

	} while (letraValida);

	for (j = 0; j < i - 1; j++) printf("%c", nome[j]);
	return 0;
}
