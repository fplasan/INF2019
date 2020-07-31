#include <stdio.h>
#include <string.h>

#define TAM 100

int es_vocal1(char ch) {
	if (ch == 'a' || ch == 'e' || ch == 'i' ||ch == 'o' || ch == 'u')
		return 1;
	else 
	    return 0;
}

int es_vocal(char ch) {
	return (ch == 'a' || ch == 'e' || ch == 'i' ||ch == 'o' || ch == 'u');
}

//sin variable auxiliar
void eliminar_vocales(char cadena[]) {
int indiceleer=0,indiceescribir=0;
	while (cadena[indiceleer] != '\0') 
	{
	if (es_vocal(cadena[indiceleer])==0) //Si NO es vocal
	    {
		cadena[indiceescribir] = cadena[indiceleer];
		indiceescribir = indiceescribir+1;
		}
	indiceleer = indiceleer+1;
    }
cadena[indiceescribir] = '\0';
}

void eliminar_vocales1(char cadena[]) {
int i; //recorre cadena
int j=0; //recorre cadena_aux
char cadena_aux[TAM];
    for (i=0;i<strlen(cadena);i++){
        if (es_vocal(cadena[i])==0){ //Si NO es vocal
            cadena_aux[j]=cadena[i];
            j++;
        }
    }
cadena_aux[j] = '\0';
strcpy(cadena,cadena_aux);
}


int main() {
char frase[TAM];
printf("ESCRIBE UNA FRASE: ");
gets(frase);
eliminar_vocales1(frase); 
printf("FRASE SIN VOCALES: %s\n",frase);
return 0;
}
