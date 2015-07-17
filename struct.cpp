#include <stdio.h>

struct teste {
	char nome[32];
	float notas[4];
};
teste aluno;
int main(void){
	printf("Digite o nome do aluno: ");
	scanf("%s" , aluno.nome);
	printf("Digite o nome do aluno: ");
	scanf("%f", aluno.notas[0]);
	return(0);
}
