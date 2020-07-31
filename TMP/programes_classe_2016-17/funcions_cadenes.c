//
//  funcions_cadenes.c
//  
//
//  Created by fpla on 27/11/16.
//
//

#include <stdio.h>
#include <string.h>
#define N 80

int contarPalabras(char f[]) {
    int i=0, Npal =0;
    
    while (i < strlen(f)){
        while (f[i] == ' ') i++;
        if (f[i] != ' ' && f[i] != '\0'){
            while (f[i] != ' ') i++;
        Npal++;
        }
    }
    return Npal;
}



int main(){
    char cad1[N],cad2[N],cad3[N];
    
    strcpy(cad1,"Hola\0");
    puts(cad1);
    printf("len=%lu\n",strlen(cad1));
    strcpy(cad2,"   Hola  como estas   estas bien adios \0");
    
    printf("NumPal: %d\n",contarPalabras(cad2));
    return 0;
}
