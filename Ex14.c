#include<stdio.h> 
#include<string.h> 
#include<ctype.h> 
#include<locale.h> 
#include<stdlib.h> 
int main(void)
{
	int i = 0, l = 0, notas[80], sair, repetidos[80], frequencia[80];
    int j, k, m;
	do {

		printf("Digite a nota: ");
		scanf("%d", &notas[i]);

		sair = notas[i] < 0 || notas[i] > 80;
		i++;

	} while (!sair);

	i--;

	for (j = 0; j < i; j++)
	{
		for (k = 0; k < i; k++)
		{
			if (notas[j] == notas[k] && j < k)
			{
				repetidos[l] = notas[j];
				l++;
				for (m = 0; m < l; m++)
				{
					if (repetidos[m] == repetidos[m + 1]) l--; 
				}

			}
		}
	}

	for (j = 0; j < l; j++)
	{
		frequencia[j] = 0;

		for (k = 0; k < i; k++)
		{
			if (repetidos[j] == notas[k])
			{
				frequencia[j] += 1;
			}
		}
	}

	for (j = 0; j < l; j++) printf("Numero = %d, Frequencia = %d \n", repetidos[j], frequencia[j]);
	return 0;
}
