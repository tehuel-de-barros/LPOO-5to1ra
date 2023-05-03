//Vamos a hacer el juego de piedra, papel y tijera:
//El jugador (persona) juega contra la maquina
//La maquina va a generar números aleatorios correspondiendo el 1 = piedra, 2 = papel y 3 = tijera.
//El campeonato consta de 5 rondas con 3 vueltas cada una.
//Se debe indicar quien es el ganador del campeonato
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int jugador, maquina;
    int jugador_puntaje = 0;
	int maquina_puntaje = 0;
    
    // Para cmabiar la semilla de los numeros aleatorios
    srand(time(NULL));
    // Comenzamos el campeonato de 5
    for (int i = 1; i <= 5; i++) {
        printf("Ronda %d:\n", i);
        // Comienza las ronda de 3 vueltas
        for (int i = 1; i <= 3; i++) {
            // Pedimos la jugada del jugador
            printf("Vuelta %d, elige tu jugada (1 = piedra, 2 = papel, 3 = tijera): ", i);
            scanf("%d", &jugador);
            // Te da numeros aleatorios
            maquina = rand() % 3 + 1;
            printf("Jugador: %d\n", jugador);
            printf("Maquina: %d\n", maquina);
            // Nos fijamos quien gana la vuelta
            if (jugador == maquina) 
                printf("Empate en la vuelta %d\n", i);
             else if ((jugador == 1 && maquina == 3) || (jugador == 2 && maquina == 1) || (jugador == 3 && maquina == 2)) {
                printf("Gana el jugador en la vuelta %d\n", i);
                jugador_puntaje++;
            } else {
                printf("Gana la maquina en la vuelta %d\n", i);
                maquina_puntaje++;
            }
        }
    }
    printf("\nEl puntaje final es:\n");
    printf("Jugador: %d\n", jugador_puntaje);
    printf("Máquina: %d\n", maquina_puntaje);
    if (jugador_puntaje > maquina_puntaje) 
        printf("¡El jugador gana el campeonato!\n");
     else if (jugador_puntaje < maquina_puntaje) 
        printf("¡La maquina gana el campeonato!\n");
     else 
        printf("¡Empate en el campeonato!\n");
    
    return 0;
}


