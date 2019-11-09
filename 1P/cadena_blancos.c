#include <stdio.h>

int main(int argc, char const *argv[])
{
	char f[100];
    
    printf("Escribe una frase: ");

	scanf("\n");
	gets(f);

	// scanf("\n%[^\n]",f);
	// alternativa al gets()
	

	printf("%s\n",f);
	return 0;
}
