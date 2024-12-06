#include <stdio.h>

int main(){
	int numero;
	printf("Digite um numero: ");
	scanf("%d", &numero);
	if(numero>10 && numero%5==0){
		printf("Maior que 10 e divisivel por 5");
	}else{
		printf("Nao atende as condicoes");
	}
	
	return 0;
}
