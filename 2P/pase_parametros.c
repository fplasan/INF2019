#include <stdio.h>
#include <string.h>   //lo veremos más adelante

int cambio(char cadena[30], int x)
{
    x = x + 1;
    strcpy(cadena, "Te he cambiado");
    //lo veremos más adelante
    return x;
}

int main()
{
    char cadena[30] = "cambiame";
    int x = 1, y;
    printf("ANTES\n");
    printf("cadena: %s\n", cadena);
    printf("x: %d\n", x);

    x=cambio(cadena, x);

    printf("DESPUES:\n");
    printf("cadena: %s\n", cadena);
    printf("x: %d\n", x);

    return 0;
}
