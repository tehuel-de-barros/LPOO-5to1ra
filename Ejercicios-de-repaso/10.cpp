#include <stdio.h>
#include <math.h>
int main() { 
	int h, m, s, hf, mf, r;
	printf("\n Ingrese que hora es:");
	scanf("%d", &h);
	printf("\n Ingrese q minuto es:");
	scanf("%d", &m); 
	printf("\n ingrese que segundo es: ");
	scanf("%d", &s);
	hf = h * 3600;
	mf = m * 60;
	r = hf + mf + s;
	printf("han pasado %d segundos en el dia", r);
	return 0; 
}
