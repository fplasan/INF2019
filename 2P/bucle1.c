#include <stdio.h>

int main()

{
	int x;
	int i;

	/*float n;
	printf("Nota:");
	scanf("%f",&n);
	if (n<0|| n>10)
		printf("La nota %f no es valida.\n",n);
	while (n<0|| n>10){
		printf("Nota:");
		scanf("%f",&n);
		if (n<0|| n>10)
		printf("La nota %f no es valida.\n",n);
		}*/

	/*do{
	printf("Nota:");
	scanf("%f",&n);
	if (n<0|| n>10)
		printf("La nota %f no es valida.\n",n);
		
	}while (n<0|| n>10);
	
	printf ("La nota correcta es: %f\n",n);*/

	do
	{
		printf("Entero positivo:");
		scanf("%d", &x);
		if (x <= 0)
			printf("Debes introducir un entero positivo.\n");

	} while (x <= 0);
	printf("los divisores de %d son:\n", x);
	for (i = 1; i <= x; i++)
		if (x % i == 0)
			printf("%d\n", i);

	return 0;
}
