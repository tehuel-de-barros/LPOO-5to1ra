#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
using namespace std; 
int main() { 
	float FMC, edad, peso;
	string hm; 
	cout << "Ingrese su peso: "; cin >> edad;
	cout << "Ingrese su edad: "; cin >> peso; 
	cout << "El paciente es hombre?:"; cin >> hm;   
	    
	if(hm == "si") FMC = ((210.00 - (0.5 * edad)) - (peso * 0.01)) + 4.00;
	else FMC = (210 - (0.5 * edad)) - (peso * .01);
	cout << "La FMC deberia ser de: "; cout << FMC;
 
	return 0; 
}
