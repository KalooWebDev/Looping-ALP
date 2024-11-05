#include <stdio.h>

int x, soma;

int main(){
	printf("Insira um numero positivo: ");
	scanf("%d", &x);
	
	if(x < 0){
    	printf("numero negativo \n");
    	x = x * -1;
    	printf("Valor corrigido para %d \n", x);
	}
	
	for(int i = 0; i < x; i++){
		if(i % 2 != 0){
			printf("%d e impar \n", i);
			soma = soma + i;
		}
	}
	
	printf("A soma de todos os numeros impares e: %d", soma);
	
	return 0;
}
