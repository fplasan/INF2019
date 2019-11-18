#include <stdio.h>
#define N 5

void leer_vector(int v[N])
{
    int i;
    for (i = 0; i < N; i++)
    {
        printf("v[%d]=", i);
        scanf("%d", &v[i]);
    }
}

int esCapicua(int v[N])
{
    int i, j, es = 1;
    i = 0;
    j = N - 1;
    while (i < j && es == 1)
    {
        if (v[i] == v[j])
        {
            i++;
            j--;
        }
        else
            es = 0;
    }
    return es;
}

int main()
{
    int v[N];
    leer_vector(v);
    if (esCapicua(v) == 1)
        printf("El vector es capicua.\n");
    else
        printf("El vector no es capicua.\n");
    return 0;
}