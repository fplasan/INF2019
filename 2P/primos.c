#include <stdio.h>

int primo(int n)
{
	// La función devuelve 1 si es primo y 0 si no lo es;
	int i;
	if (n <= 1) //el número 1 no es primo
		return 0;
	else if (n % 2 == 0 && n > 2) //números pares mayores que 2
		return 0;
	else
	{ /* Optimización: se puede cambiar n por raiz
	   donde raiz=(int)sqrt(n) */
		for (i = 3; i < n; i += 2)
		{
			if (n % i == 0)
				return 0;
		}
		return 1;
	}
}

int main()
{
	int n, es_primo, i;
	printf("Escribe un numeros entero: ");
	scanf("%d", &n);
	es_primo = primo(n);
	if (es_primo == 1)
		printf("El numero %d es primo.\n", n);
	else if (es_primo == 0)
		printf("El numero %d NO es primo.\n", n);

	/* Escribe los numeros primos menores que 1000 */
	printf("Los números primos desde 1 a 1000 son:\n");
	for (i = 1; i <= 1000; i++)
		if (primo(i)) // es lo mismo que (primo(i) == 1)
			printf("%d ", i);
	printf("\n");
}
