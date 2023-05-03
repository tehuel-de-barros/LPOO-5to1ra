#include <math.h>
#include <stdio.h>
int main() { 
	int c; 
	float d, f; 
	printf("Ingrese el valor total:"); 
	scanf("%d", &c); 
	d = c * .15;
	f = c - d;
	printf("Teniendo en cuento el despuesto del dia de hoy solo tendras q pagar %f pesos.", f);
	return 0; 
}
