#include <math.h>
#include <stdio.h>
int main() { 
	int sueldo, c1, c2, c3;
	float cf, sf;
	printf("Cuanto es el sueldo del vendedor:"); 
	scanf("%d", &sueldo); 
	printf("\n De cuando fue la 1er venta:");
	scanf("%d", &c1);
	printf("\n De cuando fue la 2er venta:");
	scanf("%d", &c2);
	printf("\n De cuando fue la 3er venta:");
	scanf("%d", &c3);
	cf = (c1 + c2 + c3) * .10;
	sf = sueldo + cf;
	printf("\n El vendedor gana en comosiones: %f y su sueldo final es %f", cf, sf);
	return 0; 
}
