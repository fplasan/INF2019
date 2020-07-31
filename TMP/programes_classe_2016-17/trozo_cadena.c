//
//  trozo_cadena.c
//  
//
//  Created by fpla on 1/12/16.
//
//

#include <stdio.h>
#include <string.h>

#define N 80

int trozo(char o[], char d[], int ini, int fin){
// Devuelve 0 si no puede sacar el trozo
// Devuelve 1 si todo es correcto
// Devuelve en d[] el trozo de la cadena pedido de o[]
    int i;
    if  (ini > fin || fin >= strlen(o)){
        printf ("Trozo incorrecto\n");
        return 0;
    }
    for (i=ini;i<=fin;i++)
        d[i-ini]=o[i];
    d[i-ini]='\0';
return 1;
}

int main(){
    char origen[N]="Hola como estás";
    char destino[N];
    int i=5,f=8,bien=0;
    
    //printf("Escribe una frase: ");
    //gets(origen);
    //printf("Dame indice origen y final de la subcadena que quieres: "),
    //scanf("%d%d",&i,&f);
    printf("origen: %s\n ini:%d\n fin:%d \n",origen,i,f);
    bien=trozo(origen, destino,i,f);
    if (bien)
        printf("Trozo= %s\n",destino);

}
