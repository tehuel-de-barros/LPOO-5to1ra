#include <stdio.h>

#define MAX_VIANDAS 4
#define MAX_OPERADORES 7

int main() {
    // Una matriz para los pedidos
    int pedidos[MAX_OPERADORES][MAX_VIANDAS];
    // Una matriz donde esta el precio de las viandas
    float precios[MAX_VIANDAS] = {10.5, 15.2, 12.8, 8.9};
    // Para saber cual supero las 4 ventas
    int ventasup4 = 0;
    // Ganancia por vianda
    float gananciavianda[MAX_VIANDAS] = {0};
    // Cantidad de viandas por operador
    int cantidadviandasoperador[MAX_OPERADORES] = {0};
    // Para calcular la comision recibida x cada op
    float comisionoperador[MAX_OPERADORES] = {0};
    float totalventas = 0;

    int i = 0;
    while (1) {
    	// Para saber el numero de operador
        int operador;
        printf("Ingrese el operador (0 para finalizar): ");
        scanf("%d", &operador);
        // Si el operador es = 0, sale corta el bucle
        if (operador == 0) break;
        // Guardamos el numero de operador en la matriz pedidos
        pedidos[i][0] = operador; 
        for (int j = 0; j < MAX_VIANDAS; j++) {
            printf("Ingrese la cantidad de viandas de tipo %d: ", j + 1);
            // Guardamos la cant de viandas de cada tipo en pedidos
            scanf("%d", &pedidos[i][j + 1]);
            // Si cant es > 4 incrementamos 1 a ventasup4 para cumplir el primer item. 
            if (pedidos[i][j + 1] > 4) ventasup4++;
            // Calculamos el total de ventas sumando el precio de cada tipo de vianda por su cantidad vendida
            totalventas += precios[j] * pedidos[i][j + 1];
            // Se acumula la ganancia por tipo de vianda
            gananciavianda[j] += precios[j] * pedidos[i][j + 1];
			// Sumamos la cant de viandas vendidas por cada op
            cantidadviandasoperador[operador - 1] += pedidos[i][j + 1];
        }
        i++;
    }

    for (int j = 0; j < MAX_OPERADORES; j++) {
    	// Calculamos la comisión del 10% del total de ventas
        comisionoperador[j] = totalventas * 0.1;
        // Y si un op vendio + de 4 viandas se le agraga en 3% mas pero solo a este operador
        if (cantidadviandasoperador[j] > 4) comisionoperador[j] += totalventas * 0.03;
    }
	// Con el contador ventasup4 imprimimos la cantidad de ventas q tienen mas de 4 ventas 
    printf("Cantidad de ventas que superaron las 4 unidades: %d\n", ventasup4);
    // La cantidad de gananca por vianda 
    printf("Ganancia por tipo de vianda:\n");
    for (int j = 0; j < MAX_VIANDAS; j++) printf("Vianda %d: %.2f\n", j + 1, gananciavianda[j]);
    // la cantidad de viandas que vendio cada operador y su comision.
    printf("Cantidad de viandas vendidas por cada operador y comision recibida:\n");
    for (int j = 0; j < MAX_OPERADORES; j++) printf("Operador %d - Cantidad de viandas: %d - Comision: %.2f\n", j + 1, cantidadviandasoperador[j], comisionoperador[j]);
	// Fin del programa 
    return 0;
}

    
    
    
    
    
    
