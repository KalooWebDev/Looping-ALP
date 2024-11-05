#include <stdio.h>

int x;
int idade;
float y, preco;
float precoEtario1, precoEtario2, precoEtario3, precoEtario4, precoTotal;

int main(){
	printf("Quantos lugares temos no onibus? ");
	scanf("%d", &x);
	
	int idadePassageiros[x];
	
	printf("Qual e o custo minimo da passagen? R$");
	scanf("%f", &y);
	
	for(int i = 0; i < x; i++){
		printf("Qual e a idade do %d passageiro? ", i + 1);
		scanf("%d", &idadePassageiros[i]);
		
		if(idadePassageiros[i] <= 7){
			preco = y;
			precoEtario1 += preco;
			precoTotal += preco;
		}else if(idadePassageiros[i] > 7 && idadePassageiros[i] < 12){
			preco = y * 1.10;
			precoEtario2 += preco;
			precoTotal += preco;
		}else if(idadePassageiros[i] > 12 && idadePassageiros[i] < 17){
			preco = y * 1.20;
			precoEtario3 += preco;
			precoTotal += preco;
		}else{
			preco = y * 1.30;
			precoEtario4 += preco;
			precoTotal += preco;
		}
	}
	
	printf("--------------------------------------------- \n");
	printf("O valor arrecado por cada faixa etaria foi de:\n");
	
	printf("Faixa etaria 1 - menor que 7 anos = R$%.2f \n", precoEtario1);
	printf("Faixa etaria 2 - maior que 7 anos e menor que 12 anos = R$%.2f \n", precoEtario2);
	printf("Faixa etaria 3 - maior que 12 anos e menor que 17 anos = R$%.2f \n", precoEtario3);
	printf("Faixa etaria 4 - maior que 17 anos = R$%.2f \n\n", precoEtario4);
	
	printf("Valor total arrecadado = R$%.2f", precoTotal);
	return 0;
}
