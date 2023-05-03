#include <stdio.h>
#include <stdlib.h>
int main() { 
	int n = 5;
	int arr[n];
	int sum = 0;
	int prom = 0; 
	for (int i = 1; i <= n - 1; i++ ){ 
		printf("Ingrese la nota de la prueba %d: ",i);
		scanf("%d", &arr[i - 1]);	
		}
	for (int i = 4; i < n; i++){ 
		printf("\n Ingrese la nota de al tarea:");
		scanf("%d", &arr[i]);
	}
//	for (int i = 0; i < n; i++) printf("\n%d", arr[i]);
	for (int i = 0; i < n; i++) sum += arr[i]; 
//	printf("\n%d", sum);
	prom = sum / n; 
	printf("\n El promedio del alumno es: %d", prom);
	if(prom >= 6) printf("\n El alumno aprobo");
	else printf("\n El alumno esta desaprobado");
	return 0; 
}
