# include <stdio.h>
//Fa�a um programa em C que leia 4 numeros inteiros usando o la�o FOR(em um vetor) e calcule sua m�dia
int main(void){
	int num[4];
	float media=0;
	for(int i=0; i<4; i++){
		printf("Digite o numero: ");	
		scanf("%d", &num[i]);
		media += num[i];
	}
	media /= 4;
	printf("Media: %.2f", media);
	return(0);
}
