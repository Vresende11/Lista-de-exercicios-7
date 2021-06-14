#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<locale.h>
#include<stdlib.h>
#define QTD_FUNCIONARIOS 5

int main(void)
{
	float salario[QTD_FUNCIONARIOS], soma = 0, media;
	int i, j;
	for (i = 0; i < QTD_FUNCIONARIOS; i++)
	{
		printf("Digite o Salario: ");
		scanf("%f", &salario[i]);
		soma += salario[i];
	}
	for (i = 0; i < QTD_FUNCIONARIOS; i++)
	{
		for (j = 0; j < QTD_FUNCIONARIOS - i - 1; j++)
		{
			if (salario[j] > salario[j + 1])
			{
				float temp = salario[j + 1];
				salario[j + 1] = salario[j];
				salario[j] = temp;
			}
		}
	}

	media = soma / QTD_FUNCIONARIOS;

	printf("Maior salario: %.2f\n", salario[QTD_FUNCIONARIOS - 1]);
	printf("Menor salario: %.2f\n", salario[0]);
	printf("Media salario: %.2f\n", media);
   return 0;
}
