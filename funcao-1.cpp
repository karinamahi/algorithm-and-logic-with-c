#include <stdio.h>
int lerInt(char nome[]);

int main(void){
	int soma;
	soma= lerInt((char *)"A") + lerInt((char *)"B");
	printf("Soma = %d", soma);
	return(0);
}

int lerInt(char nome[]){
	int x;
	printf("Digite valor de  %s: ", nome);
	scanf("%d", &x);
	return(x);
}
