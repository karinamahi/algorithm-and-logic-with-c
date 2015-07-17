#include <stdio.h>

int main(void){
	int vet[5][10];
	for(int i=0; i<5; i++){
		for(int j=0; j<10; j++){
				printf("Digite um valor: ");
		scanf("%d", &vet[i][j]);
		}
	}
	return(0);
}
