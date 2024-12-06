#include <stdio.h>

int main(){
	int N1,N2;
	printf("Digite um numero: ");
	scanf("%d", &N1);
	printf("Digite outro numero: ");
	scanf("%d", &N2);
	if(N1>N2){
		printf("N1 e o maior numero \n");
		printf("N2 e o menor numero");
	}else{
		printf("N2 e o maior numero \n");
		printf("N1 e o menor numero");
	}
	
	return 0;
}
