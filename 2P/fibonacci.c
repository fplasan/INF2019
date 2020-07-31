#include <stdio.h>
// Serie Fibonacci F1=1, F2=1,F3=2, ...,Fn=Fn-1+Fn-2

int fibonacci(int n)
{
	int f = 1, u = 1, p = 1, i;
	for (i = 3; i <= n; i++)
	{
		f = u + p;
		p = u;
		u = f;
	}
	return f;
}

int main()
{
	//Escribe los n primeros términos de la serie
	int n,i;
	printf("dame un numero entero:");
	scanf("%d", &n);
	for (i=1; i<=n;i++){
	printf("F(%d) = %d\n", i,fibonacci(i));}
}
