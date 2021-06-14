#include<stdio.h> 
#include<string.h>
#include<ctype.h> 
#include<locale.h> 
#include<stdlib.h> 

int main(void)
{
	int caracteres[30];
	int sair = 0, i = 0;
	int j, k;
	
	do {
		fflush(stdin);
		printf("Digite o caractere: ");
		caracteres[i] = getchar(); 
		sair = caracteres[i] >= 123 || caracteres[i] < 97;
		i++;

	} while (!sair);

	i--;

	for (j = 0; j < i; j++)
	{
		for (k = 0; k < i - 1; k++)
		{
			if (caracteres[k] > caracteres[k + 1])
			{
				int temp = caracteres[k + 1];
				caracteres[k + 1] = caracteres[k];
				caracteres[k] = temp;
			}
		}
	}

	for (j = 0; j < i; j++)
	{
		printf("%c", caracteres[j]);
		if (j < i - 1) printf(" < ");
	}
	return 0;
}
