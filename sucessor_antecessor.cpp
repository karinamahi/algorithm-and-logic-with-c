#include <stdio.h>
int main(void){
	int n = 0;
	printf("Digite um numero: ");
	scanf("%d", &n);
	printf("Antecessor: %d\n" , n-1);
	printf("Sucessor: %d\n", n+1);
	return(0);
}
