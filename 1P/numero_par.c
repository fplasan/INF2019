#include <stdio.h>

int main()
{ int x;
	printf("Dame un numero entero:");
	scanf("%d",&x);
	if (x%2==0)
	  {printf("El numero %d es PAR",x);}
	else
	  {printf("El numero %d es IMPAR",x);}
		  
	return 0;
}

