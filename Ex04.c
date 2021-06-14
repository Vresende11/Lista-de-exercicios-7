#include<stdio.h> 
#include<string.h> 
#include<ctype.h>
#include<locale.h>
#include<stdlib.h>
int main(void)
{
	char letras[30];
    int i;
    
	for (i = 0; i < 30; i++) 
	{
		printf("Digite as letras: ");
		scanf(" %c", &letras[i]);
	}
	for ( i = 29; i >= 0; i--) printf("%c\t", letras[i]);
 return 0;
}
