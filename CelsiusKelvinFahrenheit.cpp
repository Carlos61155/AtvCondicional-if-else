#include <stdio.h>

int main(){
	float C, F, K;
	printf("Qual a temperatura em graus celsius?: ");
	scanf("%f", &C);
	if(C<20){
		F = (C*9/5)+32;
		printf("O valor em Fahrenheit fica: %.2f", F);	
	}else{
		K = C+273.15;
		printf("O valor em kelvin fica %.2f", K);
	}
	
	return 0;
}
