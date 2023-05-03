#include <stdio.h>
#include <stdlib.h>
int main() { 
	int hora = 0;
	int minutos = 0; 
	printf(" Ingrese la hora: "); 
	scanf("%d", &hora);
//	printf(" : ");
	printf("Ingrese los minutos: ");
	scanf("%d", &minutos);
	printf("son las %d : %d ", hora, minutos);
	if(hora < 12) {
		printf("\nson las %d : %d am", hora, minutos);		 
	}
	if(hora == 12) { 
		hora = 0;
		printf("\nson las %d : %d pm", hora, minutos);
		
	}
	else if (hora > 12) {
		hora = hora - 12; 
		if(hora == 12) { 
			hora = 0;
			printf("\nson las %d : %d am", hora, minutos);
		}else printf("\nson las %d : %d pm", hora, minutos);
	}
	return 0; 	
}
