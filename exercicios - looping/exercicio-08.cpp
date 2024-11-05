#include <stdio.h>

int a, b, resultado, reserva;

int main(){
printf("Insira o valor de a: ");
scanf("%d", &a);

printf("Insira o valor de b que sera elevado ao valor a: ");
scanf("%d", &b);

reserva = a;

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

for(int i = 1; i < b; i++){
	resultado = reserva * a;
	reserva = resultado;
}

printf("Resultado = %d", resultado);

return 0;
}
