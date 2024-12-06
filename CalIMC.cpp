#include <stdio.h>

int main(){
	float peso, altura, IMC;
	printf("informe o peso: ");
	scanf("%f", &peso);
	printf("informe a altura: ");
	scanf("%f", &altura);
	IMC = peso/(altura*altura);
	if(IMC>=18.5 && IMC<=24.9){
		printf("Peso normal");
	}else{
		printf("Fora do peso normal");
	}
	
	return 0;
}
