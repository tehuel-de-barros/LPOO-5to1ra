#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() { 
	int papa = 50; 
	int hijo = 20;
	int dif = 0; 
	while (papa != (hijo * 2)){ 
		papa++;
		hijo++;
		dif++; 
	}
	printf("\n La dif es de %d ", dif);
	return 0; 	
}
