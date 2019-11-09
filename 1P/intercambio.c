

#include <stdio.h>

int main()
{   FILE *F,*E;
	int x,y,aux;
	//printf("Dame dos numeros enteros: ");
	//scanf("%d%d",&x,&y);
	
	E=fopen("entrada.txt","r");
	fscanf(E,"%d%d",&x,&y);
	if (x<0 || y<0 || x==y)
	{printf("datos no validos.");}
	else{
	 printf("x= %d y= %d\n",x,y);
	 aux=x;
	 x=y;
	 y=aux;	
	 printf("x= %d y= %d\n",x,y);
	 F=fopen("salida.txt","a");
	 fprintf(F,"x= %d y= %d\n",x,y);
	 fclose(F);
	 
	}
	
	
	return 0;
}

