#include<stdio.h> 
#include<string.h> 
#include<ctype.h> 
#include<locale.h> 
#include<stdlib.h>
#define TAM 100

int main()
{
	float valores[TAM], soma = 0;
    int i;
	for (i = 0; i < TAM; i++)
	{
		printf("Digite os valores a ser somado: ");
		scanf("%f", &valores[i]);
	}

	for (i = 0; i < TAM; i++)  soma += valores[i];

	printf("%.2f", soma);

	return 0;
}
