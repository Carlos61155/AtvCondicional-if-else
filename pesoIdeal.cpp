#include <stdio.h>

int main(){
	float h, pesoIdeal;
	int N;
	printf("Qual a altura?");
	scanf("%f", &h);
	printf("Digite 1 pra o sexo masculino e 2 para o sexo feminino: ");
	scanf("%d", &N);
	if(N=1){
		pesoIdeal = (72.7*h)-58;
	}else{
		pesoIdeal = (62.1*h)-44.7;
	}
	printf("Seu peso ideial e: %.2f", pesoIdeal);
	return 0;
}
