//
//  escribe_cuadrado.c
//  
//
//  Created by fpla on 10/12/16.
//
//

#include <stdio.h>

void escribe_cuadrado(int lado){
    int i,j;
    for (i=0;i<lado;i++){
        for (j=0;j<lado;j++){
            if (i == 0|| i == lado-1 ||j==0||j==lado-1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

int main(){
    int lado;
    printf("¿cuántos * quieres de lado?: ");
    scanf("%d",&lado);
    escribe_cuadrado(lado);
    return 0;
}
