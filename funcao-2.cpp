#include <stdio.h>
int lerInt(char nome[]);

int main(void){
	printf("Soma = %d", lerInt((char *)"A") + lerInt((char *)"B"));
	return(0);
}

int lerInt(char nome[]){
	int x;
	printf("Digite valor de  %s: ", nome);
	scanf("%d", &x);
	return(x);
}
