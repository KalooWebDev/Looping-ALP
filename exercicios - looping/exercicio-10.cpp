#include <stdio.h>

int a,b,r, inicialA, inicialB;

int main(){
	printf("Insira o valor de a: ");
	scanf("%d", &a);
	inicialA = a;
	
	printf("Insira o valor de b: ");
	scanf("%d", &b);
	inicialB = b;
	
	if(a < 0){
    	printf("a nao pode ser numero negativo \n");
    	a = a * -1;
    	printf("Valor corrigido para %d \n", a);
	}

	if(b < 0){
    	printf("b nao pode ser numero negativo \n");
    	b = b * -1;
    	printf("Valor corrigido para %d \n", b);
	}
	
	if(b > a){
		printf("Erro: Valor de b nao pode ser maior que o valor de a");
		return 1;
	}
	
	while (b != 0) {
    	int r = a % b;
        a = b;
        b = r;
    }
    
    printf ("o mdc de %d e %d e o numero: %d", inicialA, inicialB, a);
	
	return 0;
}
