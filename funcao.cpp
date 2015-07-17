#include <stdio.h>
int lerInt(char nome[]);

int main(void){
	int a, b, soma;
	a = lerInt((char *)"A");
	b = lerInt((char *)"B");
	soma= a + b;
	printf("Soma de %d + %d = %d", a, b, soma);
	return(0);
}

int lerInt(char nome[]){
	int x;
	printf("Digite valor de  %s: ", nome);
	scanf("%d", &x);
	return(x);
}
