//
//  punter.c
//  
//
//  Created by fpla on 6/11/16.
//
//

#include <stdio.h>


void cambia(int *p){
 
    *p=*p+4;
}

int main(){

    int x=4;
    printf("Valor abans de x=%d\n",x);
    cambia(&x);
    printf("Valor després de x=%d\n",x);
    int *y;
    y=&x;
    printf("Valor de y= %d\n",*y);
}
