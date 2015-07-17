#include <stdio.h>
int fatorial(int x);
int main(void){
	int i;
	printf("Digite o valor: ");
	scanf("%d", &i);
	printf("Fatorial de %d = %d\n ", i, fatorial(i));
	return(0);
}
int fatorial(int x){
	if(x==1){
		return(1);
	}else{
		return (x*fatorial(x-1)); 
	}
}
