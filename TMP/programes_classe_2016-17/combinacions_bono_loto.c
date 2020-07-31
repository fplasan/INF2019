//
//  combinacions.c
//  
//
//  Created by fpla on 20/11/16.
//
//

#include <stdio.h>

int main(){
    int c=0,i,j,k,i1,j1,k1;
    
    for (i = 1; i <= 49; i++)
    for (j = i+1; j <= 49; j++)
    for (k = j+1; k <= 49; k++)
    for (i1 = k+1; i1 <= 49; i1++)
    for (j1 = i1+1; j1 <= 49; j1++)
    for (k1 = j1+1; k1 <= 49; k1++){
        c=c+1;
        printf("%d %d %d %d %d %d\n",i,j,k,i1,j1,k1);
    }
    printf("------\n");
    printf("Num_Comb: %d\n",c);
}
