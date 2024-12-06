#include <stdio.h>

int main(){
	int velocidade, multa;
	printf("Qual a velocidade do veiculo?: ");
	scanf("%d", &velocidade);
	if(velocidade>80){
		multa = (velocidade-80)*5;
		printf("O valor da multa fica:R$ %d", multa);
	}else{
		printf("Dentro do limite de velocidade");
	}
	
	
	
	return 0;
}
