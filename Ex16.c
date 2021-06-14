#include<stdio.h> 
#include<string.h> 
#include<ctype.h> 
#include<locale.h> 
#include<stdlib.h> 
int main(void)
{
	int vetorA[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int vetorB[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int vetorC[10];
	int valor;
	int i;

	for (i = 0; i < 10; i++)
	{
		vetorC[i] = vetorA[i] + vetorB[i];
	}

	printf("Qual vetor deseja procurar? ");
	scanf("%d", &valor);

	if(valor >= 0 && valor < 10) printf("%d + %d = %d",vetorA[valor], vetorB[valor], vetorC[valor]);
	
 return 0;
}
