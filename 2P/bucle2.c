#include <stdio.h>
/* Ejemplo de bucles */
int main()
{
    int i, tope;
    printf("tope: ");
    scanf("%d", &tope);
    for (i = 0; i <= tope; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    i = 0;
    while (i <= tope)
    {
        printf("%d ", i);
        i++;
    }
    printf("\n");
    i = 0;
    do
    {
        printf("%d ", i);
        i++;
    } while (i <= tope);
    printf("\n");
}