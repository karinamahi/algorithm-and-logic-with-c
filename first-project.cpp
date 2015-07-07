#include <stdio.h>

int main(void) {
    int a, b;
    printf("Digite valor A: ");
    scanf("%d",&a);
    printf("Digite valor B: ");
    scanf("%d",&b);
    if(a==b){
    	printf("A e B sao iguais");
	}else if(a>b){
			printf("A e maior que B\n");
		}else{
    		printf("B e maior que A\n");  
		}
    return(0);
}
