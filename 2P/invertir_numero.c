#include <stdio.h>
// Dado un numero entero positvo leido por pantalla
// invertir el numero. Ej: 1234 -> 4321

int main()
{
    int numero, digito, invertido = 0;
    printf("Dame un numero: ");
    scanf("%d", &numero);
    while (numero > 0)
    {
        digito = numero % 10;
        numero = numero / 10;
        invertido = invertido * 10 + digito;
    }
    printf("Numero invertido: %d\n", invertido);
    return 0;
}
