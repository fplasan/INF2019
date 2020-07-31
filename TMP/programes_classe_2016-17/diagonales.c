//
//  diagonales.c
//  
//
//  Created by fpla on 16/12/16.
//
//

#include <stdio.h>
#define M 3
#define N 3

void diagonal_principal (int A[M][N], int d[N]){
    int i;
    for (i=0;i<N;i++)
        d[i]=A[i][i];
}

void diagonal_secundaria (int A[M][N], int d[N]){
    int i;
    for (i=0;i<N;i++)
        d[i]=A[i][(N-1)-i];
}

void escribe_matriz(int A[M][N]){
    int i,j;
    printf("Matriz:\n");
    for (i=0;i<M;i++){
        for (j=0;j<N;j++)
            printf("%d ",A[i][j]);
        printf("\n");
    }
}

void escribe_diagonal(int d[M]){
    int i;
    printf("Diagonal:\n");
    for (i=0;i<M;i++)
        printf("%d ",d[i]);
    printf("\n");
}


int main(){
    int A[M][N]={{1,2,3},{4,5,6},{7,8,9}};
    int d[M];
    
    escribe_matriz(A);
    diagonal_principal(A,d);
    escribe_diagonal(d);
    diagonal_secundaria(A,d);
    escribe_diagonal(d);
}
