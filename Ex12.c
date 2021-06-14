#include<stdio.h> 
#include<string.h> 
#include<ctype.h> 
#include<locale.h> 
#include<stdlib.h>

int main(void)
{
	int empregado[50], meses[50], i = 0, valorValido;
    int j, k;
	do {

		printf("Matricula: ");
		scanf("%d", &empregado[i]);

		if (empregado[i] != 0)
		{
			printf("Meses: ");
			scanf("%d", &meses[i]);
			i++;
		}
		else 
		{
			valorValido = empregado[i] != 0;
			i--; 
		}
		
	} while (valorValido);

	for (j = 0; j < i; j++)
	{
		for (k = 0; k < i - j - 1; k++)
		{
			if (meses[k] > meses[k + 1])
			{
				int tempMeses = meses[k + 1];
				int tempEmpregado = empregado[k + 1];

				meses[k + 1] = meses[k];
				empregado[k + 1] = empregado[k];

				meses[k] = tempMeses;
				empregado[k] = tempEmpregado;
			}
		}
	}

	printf("Empregados mais recentes:\n");
	for (j = 0; j < 3; j++) printf("%d - Matricula: %d\n", j + 1, empregado[j]);
	return 0;
}
