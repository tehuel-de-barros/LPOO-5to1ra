#include <stdio.h>
int main() {
    int num;
    printf("Ingrese un valor numérico positivo mayor que cero: ");
    scanf("%d", &num);
    if (num <= 0) printf("El número ingresado no es mayor que cero.");
    else if (num % 2 == 0) printf("El número ingresado es par.");
    else printf("El número ingresado es impar.");

    return 0;
}
