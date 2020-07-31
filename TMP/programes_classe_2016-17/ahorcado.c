//
//  ahorcado.c
//  
//
//  Created by fpla on 15/11/16.
//
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 6 //Número máximo que se puede obtener

int main() {
    int i;
    
    char seguir;//variable para controlar si quiero seguir
    int numC,numJ;//números generados para el Computador y para el Jugador
    int ganaC=0, ganaJ=0; //contadores de partidas ganadas por Computador y el Jugador
    
    printf("Hola campeón vamos a jugar.\n");
    printf("¿Quieres tirar el dado? (s/n):");
    scanf("\n%c",&seguir);
    srand(time(NULL));//para variar los numeros aleatorios en cada ejecución
    while (seguir == 's' || seguir == 'S') {
        numJ= 1+rand()%MAX;//el resto devuelve números entre 0 y MAX-1
        printf("Has obtenido un %d\n",numJ);//sumamos 1 para obtener números entre 1 y MAX
        printf ("Ahora tiro yo ...\n");
        numC= 1+rand()%MAX;
        printf ("He obtenido un %d!!",numC);
        if (numC>numJ){
            printf("Te gané, jaja\n");
            ganaC++;}
        else if (numC<numJ){
            printf("Ooohh, me ganaste\n");
            ganaJ++;}
        else{
            printf("Hemos empatado\n");
            ganaC++;
            ganaJ++;}
        
        printf("¿Quieres tirar el dado? (s/n):");
        scanf("\n%c",&seguir);
    }
    printf("Has ganado %d partida. Yo he ganado %d partida.\n",ganaJ,ganaC);
    if (ganaC == ganaJ)
        printf("Empate!\n");
    //system("PAUSE"); //para que no desaparezca la ventana
    return 0;
}
