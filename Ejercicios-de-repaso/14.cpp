#include <stdio.h>
int main() { 
	int n, va; 
	printf("Ingrese un numero: ");
	scanf("%d", &n);
	if( 0 < n ) printf("El valor absoluto de %d es %d", n, n);
	else va = n * -1; 
	printf("El valor absoluto de %d es %d", n, va);
	return 0;
}
