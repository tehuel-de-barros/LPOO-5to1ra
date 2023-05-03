#include <math.h>
#include <stdio.h>
int main() { 
	float ev1, ev2, ev3, evp, cevp, cp, tf, ctf, nf;
	printf("\n Ingrese la nota de la ev1: ");
	scanf("%f", &ev1);
	printf("\n Ingrese la nota de la ev2: ");
	scanf("%f", &ev2);
	printf("\n Ingrese la nota de la ev3: ");
	scanf("%f", &ev3);
	evp = (ev1 + ev2 + ev3) / 3.00;
	cevp = evp * 0.55;
	cp = evp * 0.30;
	printf("\n Ingrese la nota del trabajo final: ");
	scanf("%f", &tf);
	ctf = tf * 0.15; 
	nf = cevp + cp + ctf; 
	printf(" Su nota final es: %f", nf);
	return 0; 
}
