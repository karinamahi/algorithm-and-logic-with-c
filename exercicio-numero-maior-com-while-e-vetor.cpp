# include <stdio.h>
//Faça um programa em C que leia 4 numeros inteiros usando o laço while(em um vetor) e encontre o maior numero.
int main(void){
	int i=0;
	int num[4];
	int maior=0;
	while(i<4 ){
		printf("Digite o numero: ");
		scanf("%d", &num[i]);
		if(num[i]>maior){
			maior = num[i];
		}
		i++;
	}
	printf(" Numero maior: %d", maior);
	return(0);
}
