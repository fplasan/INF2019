#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define N 10

int leer_vector(int v[]){
	int i,comp=0;
    do {
        printf("num.comp:");
        scanf("%d",&comp);
        if (comp>10)
            printf("No puede haber mas de %d componentes\n",N);
    }while (comp>10);
        
	for (i=0;i<comp;i++){
		printf("v[%d]=",i);
		scanf("%d",&v[i]);}
	return comp;
	}

int main (){
	
	int i,v[N]; //vector de N (10) enteros
	int tope;
	
    tope=leer_vector(v);
    printf("====FUERA DE LA FUNCIÓN====\n");
	for (i=0;i<tope;i++)
		printf("v[%d]=%d\n",i,v[i]);
	 
	return 0;
}
