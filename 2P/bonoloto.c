//
//  bonoloto.c
//  
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 6
#define MAX 49


int esta (int c[N],int num){
    int i=0;
    while (i<N && c[i]!=0){
        if (c[i]==num)//lo ha encontrado
            return 1;
        i++;
    }
    return 0;//No lo ha encontrado
}

void escribe_combinacion(int c[N]){
    int i;
    printf("Combinación: ");
    for (i=0;i<N;i++)
        printf("%d ",c[i]);
    printf("\n");
}

int main(){
    
    int comb[N]={0,0,0,0,0,0};
    int num;
    int tengo=0;

    /* Intializes random number generator */
    srand(time(NULL));
    num= rand()%MAX+1; //el primer el perdem
    
    while (tengo < N){
        num= rand()%MAX+1;//genera numeros aleatorios: 1..49
        if (!esta(comb,num)){
            comb[tengo]=num;
            tengo++;
        }
    }
    escribe_combinacion(comb);
}
