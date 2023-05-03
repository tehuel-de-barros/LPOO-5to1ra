#include <stdio.h>
#include <stdlib.h>
int main() { 
	float peso;
	float dolar = 380.00;
	printf("Ingrese la cantidad de pesos que desea cambiar a dolares: ");
	scanf("%f", &peso); 
	float res = peso / dolar; 
	printf("Usted obtendra %f dolares", res); 
	return 0; 
}
