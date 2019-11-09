


#include <stdio.h>

#define N 20
#define NNIF 10 /* 8 dígitos numéricos + 1 letra + el carácter fin de cadena */

int main(){
    char nombre[N], apellido1[N], apellido2[N], 
         NIF[NNIF], sexo, fecha[8];
    int edad;
    float creditos;

/* Entrada de datos */
    printf("Entrada de datos de un alumno\n\n");
    printf("Nombre: ");
    scanf("%s", nombre);
    printf("Primer apellido: ");
    scanf("%s", apellido1);
    printf("Segundo apellido: ");
    scanf("%s", apellido2);
    printf("NIF: ");
    scanf("%s", NIF);
    printf("Sexo(H/M): ");
    scanf("\n%c", &sexo);
    printf("Numero de creditos matriculados: ");
    scanf("%f", &creditos);
    printf("Fecha actual: ");
    scanf("%s", fecha);


  /* Salida de datos */
  printf("\n\nDatos introducidos:\n\n");
  printf("Nombre completo: %s %s %s\n", 
         nombre, apellido1, apellido2);
  printf("NIF: %s\n", NIF);
  printf("Sexo(H/M): %c\n", sexo);
  printf("Numero de creditos matriculados: %.2f\n", 
         creditos);
  printf("La fecha actual es %s\n",fecha);
    

	
	return 0;
}

