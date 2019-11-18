#include <stdio.h>
#include <math.h>
#define N 10

float media(float v[N])
{
    int i, suma = 0;
    for (i = 0; i < N; i++)
    {
        suma = suma + v[i];
    }
    return suma / N;
}

float varianza(float v[N])
{
    float var = 0, med;
    int i;
    med = media(v);
    for (i = 0; i < N; i++)
        var = var + pow(v[i] - med, 2);
    return var / N;
}
int main()
{
    float v[N];
    int i;
    FILE *F;
    //comprueba que exista el fichero
    F = fopen("datos.txt", "r");
    if (F == NULL)
    {
        printf("El fichero no existe.\n");
        return -1;
    }
    // si existe, lee el fichero
    for (i = 0; i < N; i++)
    {
        fscanf(F, "%f", &v[i]);
    }
    //y calcula la varianza
    printf("La varianza es: %.2f", varianza(v));
    return 0;
}