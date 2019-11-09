#include <stdio.h>
/* Com llegir un fitxer*/

int main(){
	FILE *F;
	float x,suma=0;
	int cont=0;
	
	F=fopen("notas.txt","r");
	
	if (F==NULL) printf ("El fichero no existe\n");
	
	//while (fscanf(F,"%f",&x)!=EOF)
	while (fscanf(F,"%f",&x)==1)
	{printf("%f\n",x);
	 suma=suma+x;
	 cont=cont+1;	
		}
	printf ("media= %f\n",suma/cont);
	printf ("num.notas= %d\n",cont);
    return 0;
	}
