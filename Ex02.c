#include<stdio.h> 
#include<string.h> 
#include<ctype.h> 
#include<locale.h> 
#include<stdlib.h> 
int main(void)
{

	float notas[50] = { 9, 10, 8 };

	printf("Digite a quantidade de alunos: ");
	int alunos, i;
	scanf("%d", &alunos);

	for (i = 0; i < alunos; i++) printf("%.2f\t", notas[i]);
	return 0;
}
