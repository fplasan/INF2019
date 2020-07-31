//
//  matrius.c
//  
//
//  Created by fpla on 21/11/16.
//
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    int fil,col;
    int **m1;
    int **m2;
    int i,j;
    
    printf("Num. Files: ");
    scanf("%d",&fil);
    printf("Num. Columnes: ");
    scanf("%d",&col);
    
    m1 = (int**)malloc(fil*sizeof(int*));
    if (m1 == NULL){
        printf("No se ha resercado memoria");
        exit(1);}
    
    for (i=0; i<fil;i++){
        m1[i] =(int*)malloc(col*sizeof(int));
        if (m1[i] == NULL){
            printf("No se ha resercado memoria");
            exit(1);
        }
    }
        
        for (i=0; i<fil; i++)
            for (j=0;j<col;j++){
                printf("(%d,%d): ",i,j);
                scanf("%d", &m1[i][j]);
            }
        
       //ESCRIU LA MATRIU
        for (i=0; i<fil; i++){
            for (j=0;j<col;j++)
                printf("%d ", m1[i][j]);
            printf("\n");
        }
    
    
    free(m1);
    return 0;
}
