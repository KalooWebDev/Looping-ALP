#include <stdio.h>

float precos[100];
float precoFinal;

int main(){
	for(int i = 0; i < 100; i++){
		printf("Digite o preco do produto %d: ", i + 1);
		scanf("%f", &precos[i]);
	}
	
	for(int i = 0; i < 100; i++){
		if(precos[i] > 150.00){
			precos[i] = precos[i] * 0.95;
		}
		precoFinal = precoFinal + precos[i];
	}
	
	float media = precoFinal / 100;
	
	printf("A media dos preco com descontos e de: R$%.2f", media);
	return 0;
}
