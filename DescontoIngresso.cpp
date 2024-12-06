#include <stdio.h>

int main(){
	int idade;
	float ingresso, desconto;
	printf("Qual a idade?: ");
	scanf("%d", &idade);
	printf("Qual o valor do ingresso?:R$");
	scanf("%f", &ingresso);
	if(idade>60){
		desconto = ingresso-(ingresso*0.30);
		printf("O valor final do ingresso fica:R$ %.2f", desconto);	
	}else{
		desconto = ingresso-(ingresso*0.10);
		printf("O valor final do ingresso fica:R$ %.2f", desconto);
	}
	
	return 0;
}
