#include <stdio.h>
int main() { 
	int ah, am;
	float pm, ph;
	printf("Ingrese cuantos estudiantes hombres hay: ");
	scanf("%d", &ah); 
	printf("Ingrese cuantos estudiantes mujeres hay: ");
	scanf("%d", &am); 
	float a = ah + am; 
	pm = am * 100 / a;
	ph = ah * 100 / a;
	printf("El %f del aula son mujeres y el otro  %f son hombre", pm, ph);
	return 0;
}
