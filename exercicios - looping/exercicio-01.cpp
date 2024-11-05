#include <stdio.h>

int a,b,x;
int numerosPossiveis;

int main(){
	printf("Escolha quantos numeros e possivel dividir por x, entre o limite a e b \n\n");
	
	printf("Digite o valor de x: ");
	scanf("%d", &x);
	printf("Digite o valor de a: ");
	scanf("%d", &a);
	printf("Digite o valor de b (a < b): ");
	scanf("%d", &b);
	
	if(b <= a){
		printf("Erro: Valor de a menor ou igual a valor de b (a >= b).");
		return 1;	
	}
	
	if(x == 0){
		printf("Erro: nao e possivel dividir por 0");
		return 1;
	}
	
	printf("Numeros divisiveis por %d entre %d e %d:  \n", x,a,b);
	
	for(int i = a; i <= b; i++){
		if(i % x == 0){
			printf("%d \n", i);
			numerosPossiveis++;
		}
	}
	
	printf("entre %d e %d podemos dividir %d vezes por %d", a,b,numerosPossiveis,x);
	
	return 0;
}
