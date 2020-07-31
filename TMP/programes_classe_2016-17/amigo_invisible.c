//
//  amigo_invisible.c
//  
//
//  Created by fpla on 10/12/16.
//
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>


#define Nmax 20 //max numero participantes
#define Long 80 //numero máximo de caracteres del nombre

int leer_participantes(char v[Nmax][Long]){
    int i,NP;
    printf("Numero de participantes:");
    scanf("%d",&NP);
    //TODO: comprobar que NP<Nmax
    for (i=0;i<NP;i++){
        printf("Nombre del participante %d: ",i+1);
        scanf("\n");
        gets(v[i]);
    }
return NP;
}

void barajar_participantes (char v[Nmax][Long],int NP){
    int i,or,des;
    char aux[Long];
    srand(time(NULL));
    i=0;
    while (i<=100){ //barajar 100 veces, por ejemplo.
        or=rand()%NP;
        des=rand()%NP;
        if (or != des){
            strcpy(aux,v[or]);
            strcpy(v[or],v[des]);
            strcpy(v[des],aux);
        }
    i++;
    }
}


void escribir_participantes (char v[Nmax][Long],int NP){
    int i;
    printf("__________________\n");
    for (i=0;i<NP;i++){
        printf("Nombre del participante %d: ",i+1);
        printf("%s\n",v[i]);
    }
    printf("__________________\n");
}


void obtener_emparejamientos (char v[Nmax][Long],int NP){
    int i;
    for (i=0;i<NP-1;i++)
        printf ("%s ragala a %s\n", v[i],v[i+1]);
    printf ("%s ragala a %s\n", v[NP-1],v[0]);

}

int main(){
    
    char v[Nmax][Long]; //Estructura para guardar los nombres de los participantes.
    int NP; //Numero de participantes.
    
    NP=leer_participantes (v);
    escribir_participantes (v,NP);
    barajar_participantes (v,NP);
    escribir_participantes (v,NP);
    obtener_emparejamientos (v,NP);
    //getch();
}


