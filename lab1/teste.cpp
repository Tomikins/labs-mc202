#include <stdio.h>

int maximo(int a, int b) {
	if (a > b)
	return a;
	else
return b;
}
int potencia(int a, int b) {
int prod = 1, i;
for (i = 0; i < b; i++)
	prod *= a;
	return prod;
}

int main() {
	int a, b;
	printf("Entre com a e b\n");
	scanf("%d %d", &a, &b);
	printf("Maximo: %d\na^b: %d\n", maximo(a, b), potencia(a, b));
	return 0;
}
