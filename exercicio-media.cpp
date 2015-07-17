#include <stdio.h>
//Faça um programa em C que leia 4 numeros inteiros(sem usar vetor) e calcule a sua media
int main(void){
	int n1, n2, n3, n4;
	float media;
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	printf("Digite o terceiro numero: ");
	scanf("%d", &n3);
	printf("Digite o quarto numero: ");
	scanf("%d", &n4);
	media = (float)(n1+n2+n3+n4)/4;
	printf("Media = %.2f", media);
	return(0);
}
