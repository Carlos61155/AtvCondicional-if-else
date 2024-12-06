#include <stdio.h>

int main(){
	int numero;
	printf("Digite um numero inteiro: ");
	scanf("%d", &numero);
	if(numero%2==0){
		printf("O dobro do numero fica: %d", numero*2);
	}else{
		printf("O triplo do numero fica %d", numero*3);
	}
	
	return 0; 
}
