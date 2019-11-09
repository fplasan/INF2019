#include <stdio.h>

int main()
{
    int fil, col, Nfil, M;
    printf("Altura de la silla: ");
    scanf("%d", &Nfil);
    M = (Nfil / 2) + 1;
    for (fil = 1; fil <= Nfil; fil++)
    {
        if (fil < M)
        {
            printf("*\n");
        }
        else if (fil == M)
        {
            for (col = 1; col <= M; col++)
                printf("*");
            printf("\n");
        }
        else
        {
            for (col = 1; col <= M; col++)
            {
                if (col == 1 || col == M)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
}
