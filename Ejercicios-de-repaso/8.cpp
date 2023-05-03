#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() { 
	float cf, ci;
	float i = 0.02;
	int m;  
	printf("\n Cuanto dinero desea ingresar, recuerde que el interes es de 2 al mes: ");
	scanf("%f", &ci);
	printf("\n Durante cuanto tiempo: ");
	scanf("%d", &m);
	cf = ci * pow((1 + i), m);
	printf("%f", cf); 	
	return 0; 	
}
