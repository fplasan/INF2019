#include <stdio.h>
int main()
{
    int fila, col, dim;
    printf("dimension:");
    scanf("%d", &dim);
    for (fila = 1; fila <= dim; fila++)
    {
        for (col = 1; col <= dim; col++)
        {
            if (fila == 1 || fila == dim || col == 1 || col == dim)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}