//
//  busquedas.c
//  
//
//  Created by fpla on 19/12/16.
//
//

#include <stdio.h>

int busquedaBinaria(int  vector[], int n, int dato) {
    int centro,inf=0,sup=n-1;
    while(inf<=sup){
        centro=((sup-inf)/2)+inf;
        if(vector[centro]==dato)       return centro;
        else if(dato < vector[centro]) sup=centro-1;
        else                           inf=centro+1;
    }
    return -1;
}


int busquedaSimple(int  vector[n], int n, int dato) {
    
    int i;
    
    for(i=0; i<n; i++){
        if(dato==vector[i]) {
            return i;
            break;
        }
    }
    
    return -1;
    
}


