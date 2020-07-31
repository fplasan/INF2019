#include <stdio.h>
#include <math.h>
#define INF 4
#define SUP 10

int leerNumero(int inf, int sup){
    int n;
    do{
        printf("Dame un numero entero entre %d y %d: ",inf,sup);
        scanf("%d" ,&n);
    }while (n<inf || n>sup );
    return (n);
}

float suma(int N){
    float s=0;
    int x;
    for (x=0;x<=N;x++)
        s=s+(pow(x,2)/(pow(x,3)-4));
    return s;
}

int mayorQue(float S){
    FILE *F;
    float v;
    int cuantos=0;
    F=fopen ("valores.txt","r");
    if (F==NULL)
        return -1;
        
    while (fscanf(F,"%f",&v)!=EOF){
        if (v>S)
            cuantos++;
    }
    fclose(F);
    return cuantos;
}

int main (){
    int N;
    float S;
    int cuantos;
    N=leerNumero(INF,SUP);
    S=suma(N);
    printf("Suma=%f\n",S);
    cuantos=mayorQue(S);
    if (cuantos== -1)
        printf ("El fichero no existe\n");
    else
        printf ("En el fichero hay %d valores mayores que la suma %f\n",cuantos, S);
    return 0;
}
