#include <stdio.h>

int main(){
	float N1, N2, N3, M;
	printf("Qual a primeira nota?: ");
	scanf("%f", &N1);
	printf("Qual a segunda nota?: ");
	scanf("%f", &N2);
	M = (N1+N2)/2;
	if(M>=7){
		printf("Aprovado");
	}else{
		printf("Qual a nota adicional?: ");
		scanf("%f", &N3);
		M = (N1+N2+N3)/3;
		if(M>=5){
			printf("Aprovado com recuperacao");
		}else{
			printf("Reprovado");
		}
	}
	
	
	return 0;
}
