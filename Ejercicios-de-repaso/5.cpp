#include <stdio.h>
#include <stdlib.h>
int main() { 
	int nota = 0; 
	printf("\n Escriba la nota del alumno: ");
	scanf("%d", &nota);
//	printf("\n %d",nota);
	if(nota == 1) printf("\n DESAPROBADO, Debes esforzarte mas");
	else if(nota > 1 && nota <= 5) printf("\n DESAPROBADO");
	else if(nota > 5 && nota < 8)  printf("\n APROBADO");
	else printf("\n APROBADO, felicitaciones");
	return 0; 
}
