#include <stdio.h>

int main()
{   char c;
	printf("Entra una vocal en minusculas:");
	scanf("\n%c",&c);
	  switch (c) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                 printf("Mayusculas: %c",c-32); break;
            default: 
                 printf("No es una vocal!!!!"); break;
		}
	
	return 0;
}

