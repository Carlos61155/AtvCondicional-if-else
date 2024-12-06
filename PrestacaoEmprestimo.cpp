#include <stdio.h>

int main(){
	float salario, prestacao, salapres;
	printf("Qual o salario?: ");
	scanf("%f", &salario);
	printf("Qual o valor da prestacao?: ");
	scanf("%f", &prestacao);
	salapres = salario*0.20;
	if(prestacao>salapres){
		printf("Emprestimo nao concedido");
	}else{
		printf("Emprestimo concedido");
	}
	
	return 0;
}
