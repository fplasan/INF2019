//
//  arbre_nadal.c
//  
//
//  Created by fpla on 11/12/16.
//
//

#include <stdio.h>


void dibuixa_arbre(int n){
    int i,j,k;
    for(i=0;i<n;i++){
        for(j=0;j<=(n-i);j++){
            printf(" ");
        }
        for(k=0;k<=(i*2);k++){
            printf("*");
        }
        printf("\n");
    }
}


int main(){
    int n;
    do{
        printf("        BON NADAL\n\nEntra el nombre de files (0 per eixir): ");
        scanf("%d",&n);
        dibuixa_arbre(n);
        
    }while(n!=0);
    return 0;
}



