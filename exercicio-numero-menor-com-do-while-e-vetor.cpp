//Fa�a um programa em C que leia 4 n�meros inteiros usando um la�o DO WHILE(em um vetor) e encontre o menor n�mero
#include <stdio.h>
 int main(void){
 	int num[4];
 	int i=0, menor = 1000;
 	do{
 		printf("Digite o numero: ");
		scanf("%d", &num[i]);
		if(num[i]<menor){
			menor = num[i];
		}
		i++;
	 }while(i<4);
	 printf("Menor: %d\n", menor);
	 return(0);
 }
