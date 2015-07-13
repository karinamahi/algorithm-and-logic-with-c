#include <stdio.h>
#include <string.h>

int main(void){
	float peso, altura;
	int nasc, pares;
	char ra[10];
	
		printf("Digite o peso: ");
		scanf("%f", &peso);
		printf("Digite a altura: ");
		scanf("%f", &altura);
		printf("Digite o ano de nascimento: ");
		scanf("%d", &nasc);
		strcpy(ra, "1513838");
		printf("RA: %s\n", ra);
		printf("Dois digitos do RA: %c%c \n", ra[5], ra[6]);
		printf("IMC: %f\n", peso/(altura*altura));
		printf("Terceiro digito do RA: %c \n", ra[4]);
		
		while(nasc<2015){
			if(nasc%2==0){
				pares++;
			}
			nasc++;
		}
		printf("O total de numeros pares entre o ano de nascimento e 2015 eh: %d\n", pares);

	return(0);
}
