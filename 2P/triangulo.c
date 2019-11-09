#include <stdio.h>
#define N 10
/* triangulo de N filas*/
int main()
{
	int fila,columna;
	for (fila=0;fila<10;fila++){
		for (columna=0;columna<=fila;columna++)
			printf("*");
		printf("\n");
		}
}