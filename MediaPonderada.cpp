#include <stdio.h>

int main(){
	float N1, N2, N3, M;
	printf("Informe a primeira nota: ");
	scanf("%f", &N1);
	printf("Informe a segunda nota: ");
	scanf("%f", &N2);
	printf("Informe a terceira nota: ");
	scanf("%f", &N3);
	M = (N1+N2+(N3*2))/3;
	if(M>=6){
		printf("Aprovado");
	}else{
		printf("Reprovado");
	}
	return 0;
}
