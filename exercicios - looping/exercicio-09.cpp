#include <stdio.h>

int n;
int primo = 1;
    
int main() {
printf("Digite um numero: ");
scanf("%d", &n);

if (n <= 1) {
    primo = 0;
} else {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            primo = 0;
        }
	}
}

if (primo) {
    printf("%d e um numero primo.\n", n);
} else {
    printf("%d nao e um numero primo.\n", n);
}

return 0;
}
