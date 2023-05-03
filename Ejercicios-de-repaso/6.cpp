#include <stdio.h>
#include <stdlib.h>
int main() { 
	float alquiler = 0.00; 
	float sueldo = 0.00; 
	float porcentaje = 0.00; 
	printf("\n Escriba el valor del alquiler: ");
	scanf("%f", &alquiler);
	printf("\n Ingrese el sueldo: ");
	scanf("%f", &sueldo);
	if(sueldo <= 202) printf("\n Debe pagar 0 en impuesto, por ende debe pagar %f", alquiler);
	else if( 202 < sueldo && sueldo <= 607 ) { 
		porcentaje = alquiler * 0.05;
		alquiler += porcentaje; 
		printf("\n Se debe pagar un 5 en impuesto, por ende debe pagar %f", alquiler);
	}
	else if( 607 < sueldo && sueldo <= 1013 ){ 
		porcentaje = alquiler * 0.10; 
		alquiler += porcentaje; 
		printf("\n Se debe pagar un 10 en impuesto, por ende debe pagar %f", alquiler);	
	}
	else if( 1013 < sueldo && sueldo <= 1418 ) { 
		porcentaje = alquiler * 0.15; 
		alquiler += porcentaje; 
		printf("\n Se debe pagar un 15 en impuesto, por ende debe pagar %f", alquiler);
	}
	else {
		porcentaje = alquiler * 0.25; 
		alquiler += porcentaje; 
		printf("\n Se debe pagar un 15 en impuesto, por ende debe pagar %f", alquiler);
	}
	return 0; 	
}
