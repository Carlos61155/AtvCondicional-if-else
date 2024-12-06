#include <stdio.h>

int main(){
	float compra, pagamento;
	printf("Qual o valor da compra?:R$ ");
	scanf("%f", &compra);
	printf("Digite 1 se o pagamento for a vista e 2 se o pagamento for a prazo");
	scanf("%f", &pagamento);
	if(compra>500 && pagamento == 1){
		printf("Tem direito a desconto");
	}else{
		printf("Sem desconto");
	}
	
	return 0;
}
