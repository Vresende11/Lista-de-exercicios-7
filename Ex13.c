#include<stdio.h> 
#include<string.h> 
#include<ctype.h>
#include<locale.h>
#include<stdlib.h> 
#include<conio.h>



int main(void)
{
	char frase[80];
	int i, j = 0, branco = 0, letra = 0, listaLetras[80][2];
    int k;
	for (i = 0; i < 80; i++) listaLetras[i][0] = 0;

	printf("Digite uma frase: ");
	fgets(frase, 80, stdin);


	while (frase[j] != '\0')
	{
		j++;
	}

	int l = 0, contador = 4;
	fflush(stdin);
	for (i = 0; i < j; i++)
	{
		int parLetras = 0;
		if ((int)frase[i] == 32) branco++;
		else if ((int)frase[i] == 97 || (int)frase[i] == 65) letra++;

		for (k = 0; k < j - 1; k++)
		{
			if ((int)frase[i] == (int)frase[k])
			{
				listaLetras[l][0] = (int)frase[k];
				parLetras++;
			}
		}

		listaLetras[l][1] = parLetras;
		for ( k = 0; k < j - 1; k++)
		{
			if (listaLetras[l][0] == listaLetras[k][0] && l > k) l--;
		}
		
		l++;
	}

	printf("Espacos em branco = %d\n", branco);
	printf("Letras A ou a = %d\n", letra);
	for (k = 0; k < l; k++)
	{
		printf("Letra = %c\n", listaLetras[k][0]);
		printf("Quantidade = %d\n", listaLetras[k][1]);
	}
		
	return 0;
}
