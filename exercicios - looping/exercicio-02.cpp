#include <stdio.h>

int a1, a2;

int main(){
	printf("Insira um ano: ");
	scanf("%d", &a1);
	
	printf("Insira um segunda ano (segundo ano > primeiro ano): ");
	scanf("%d", &a2);
	
	if(a2 < a1){
		printf("Erro: O segundo ano e menor que primeiro ano inserido");
		
		return 1;
	}
	
	printf("Esses sao os anos bisextos entre %d e %d: \n", a1, a2);
	
	for(int i = a1; i < a2; i++){
		if(i % 4 == 0 && i % 100 != 0 || i % 400 == 0 && i % 100 == 0){
			printf("%d - Ano Bisexto \n", i);
		}else{
			printf("%d - Nao e bisexto \n", i);
		}	
	}
	
	return 0;
}
