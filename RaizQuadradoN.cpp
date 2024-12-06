#include <stdio.h>
#include <math.h>

int main(){
	float N, resultado;
	printf("Informe um numero: ");
	scanf("%f", &N);
	if(N>=0){
		resultado = sqrt(N);
		printf("A raiz quadrada de %.2f fica %.2f", N, resultado);
	}else{
		resultado = N*N;
		printf("O quadrado de %.2f fica %.2f", N, resultado);
	}
	
	return 0;
}
