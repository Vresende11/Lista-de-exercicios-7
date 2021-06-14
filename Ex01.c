#include<stdio.h> 
#include<string.h> 
#include<ctype.h> 
#include<locale.h> 
#include<stdlib.h> 

int main(void){
	float notas[30] = {9, 10, 8};
    int i;
	for(i = 0; i < 30; ++i){
		scanf("%f", &notas);
	 printf("%.2f\t", notas[i]);
}
 return 0;
}
