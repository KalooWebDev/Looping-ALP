#include <stdio.h>

int n, produto;

int main(){
	printf("Voce gostaria de ver a tabuada do numero: ");
	scanf("%d", &n);
	
	if(n < 0){
    	printf("numero negativo \n");
    	n = n * -1;
    	printf("Valor corrigido para %d \n", n);
	}
	
	for(int i = 10; i >= 0; i--){
		produto = n * i;
		printf("%d x %d = %d \n", n, i, produto);	
	}
	
	return 0;
}
