#include <stdio.h>
#include <math.h>
/* Escribe las potencias de 2 menores de un numero dado 
de manera decreciente */

int main()
 {int num,i=0,maxi=0,pot=0;
	 
	 //leer n
	  printf("Dame el numero:");
	  scanf("%d",&num);
	  
	 //encontrar exponente máximo i 
	  do{ pot=pow(2,i);
		  if (pot<num) maxi=i;
		  i++;
		  } while (pot<num); 
	//escribir potencias de manera inversa
	
	  for (i=maxi; i>=0;i--)
	     printf ("%d ", (int)pow(2,i));
	  printf("\n");
	 }

