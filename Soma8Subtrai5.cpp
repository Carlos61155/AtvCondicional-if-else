#include <stdio.h>

int main(){
	int N1, N2, S;
	printf("Qual o primeiro numero?: ");
	scanf("%d", &N1);
	printf("Qual o segundo numero?: ");
	scanf("%d", &N2);
	S = N1+N2;
	if(S>20){
		S = S+8;
		printf("A soma adicionado 8 ficou: %d", S);
	}else{
		S = S-5;
		printf("A soma subtraindo 5 ficou: %d", S);
	}
	
	
	return 0;
}
