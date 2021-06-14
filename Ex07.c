#include<stdio.h> 
#include<string.h> 
#include<ctype.h> 
#include<locale.h> 
#include<stdlib.h>

int main(void)
{
	setlocale(LC_ALL, "");
	float precos[100];
	int i = 0, sair;
	int j;
	do {
		fflush(stdin);
		printf("Informe o preco do CD %d: ", i + 1);
		scanf(" %f", &precos[i]);

		sair = precos[i] == 0 || i > 99;
		i++;

	} while (!sair);

	i--;

	int escolha;
	printf("1 - Aumento de 10%%: \n");
	printf("2 - Escolher o aumento: \n");
	scanf("%d", &escolha);

	switch (escolha)
	{
	case 1:
		for (j = 0; j < i; j++)
		{
			precos[j] = precos[j] * 1.1;
		}
		break;
	
	case 2:;
		float percentual;
		printf("Digite o percentual que deseja aumentar: ");
		scanf("%f", &percentual);

		for (j = 0; j < i; j++)
		{
			precos[j] = precos[j] * (1 + percentual/100);
		}
		break;

	default:
		break;
	}

	printf("Novos pre�os: \n");

	for( j = 0; j < i; j++)
	{
		printf("R$ %.2f\n", precos[j]);
	}
	return 0;
}
