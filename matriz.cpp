#include <stdio.h>
#include <stdlib.h>
int main(void){
	float notas[10][4];
	int i, j;
	for(i=0; i<10; i++){
		printf("Digite as nota do aluno %d\n ", i+1);
		for(j=0; j<4; j++){
			printf("Digite a nota %d: ", j+1);
			scanf("%f", &notas[i][j]);	
		}
		system("cls");
		}
	return(0);
}

