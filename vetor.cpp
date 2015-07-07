#include <stdio.h>
int main(void){
	float notas[4];
	int i;
	for(i=0; i<4; i++){
		printf("Digite a nota %d: ", i+1);
		scanf("%f", &notas[i]);	
		}
	for(i=0; i<4; i++){
		printf("Nota %d = %2.f\n", i+1, notas[i]);
	}
	return(0);
}

