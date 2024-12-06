#include <stdio.h>

int main(){
	int A, B, C, D;
	printf("Digite o primeiro numero: ");
	scanf("%d", &A);
	printf("Digite o segundo numero: ");
	scanf("%d", &B);
	printf("Digite o terceiro numero: ");
	scanf("%d", &C);
	printf("Digite o quarto numero: ");
	scanf("%d", &D);
	
	if(A>B && A>C && A>D){
		
		if(B<C && B<D){
			printf("%d e o maior numero\n", A);
			printf("%d e o menor numero", B);
		}else{
			if(C<B && C<D){
				printf("%d e o maior numero\n", A);
				printf("%d e o menor numero", C);
			}else{
				printf("%d e o maior numero\n", A);
				printf("%d e o menor numero", D);
			}
		}
	}
	if(B>A && B>C && B>D){
		
		if(A<C && A<D){
			printf("%d e o maior numero\n", B);
			printf("%d e o menor numero", A);
		}else{
			if(C<A && C<D){
				printf("%d e o maior numero\n", B);
				printf("%d e o menor numero", C);
			}else{
				printf("%d e o maior numero\n", B);
				printf("%d e o menor numero", D);
			}
		}
	}
	if(C>A && C>B && C>D){
		
		if(A<B && A<D){
			printf("%d e o maior numero\n", C);
			printf("%d e o menor numero", A);
		}else{
			if(B<A && B<D){
				printf("%d e o maior numero\n", C);
				printf("%d e o menor numero", B);
			}else{
				printf("%d e o maior numero\n", C);
				printf("%d e o menor numero", D
				);
			}
		}
	}
	if(D>A && D>B && D>C){
		
		if(A<B && A<C){
			printf("%d e o maior numero\n", D);
			printf("%d e o menor numero", A);
		}else{
			if(B<A && B<C){
				printf("%d e o maior numero", D);
				printf("%d e o menor numero", B);
			}else{
				printf("%d e o maior numero", D);
				printf("%d e o menor numero", C);
			}
		}
	}
	
	
	return 0;
}
