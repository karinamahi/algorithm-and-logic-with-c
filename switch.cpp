#include <stdio.h>
int main (void){
	int mes;
	printf("Digite o mes: ");
	scanf("%d", &mes);
	switch(mes){
		case 1: 
			printf("Janeiro\n");
		break;
		case 2: 
			printf("Fevereiro\n");
		break;
		case 3: 
			printf("Marco\n");
		break;
		default:
			printf("Mes invalido\n");
	}
	return(0);
}
	
	
