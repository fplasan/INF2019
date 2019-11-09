

#include <stdio.h>

int main()
{
	char nombre[50],federado;
	int edad;
	FILE *F;
	
	printf("Dame nombre:");
	scanf("\n");gets(nombre);
	printf("Edad:");
	scanf("%d",&edad);
	printf("Federado (s/n):");
	scanf("\n%c",&federado);
	
	if (edad<=16 && edad>=14){
		F=fopen("cadetes.txt","a");
		fprintf(F,"%s\n%d\n%c\n",nombre,edad,federado);
		fclose(F);
		}
	else{
		printf("%s de %d anyos no es Cadete\n",nombre,edad);
		}
	
	
	return 0;
}

