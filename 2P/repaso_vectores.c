#include <stdio.h>
#include <string.h>
#define N 5

void lee_vector(int v[])
{
    int i;
    for (i = 0; i < N; i++)
    {
        printf("v[%d]= ", i);
        scanf("%d", &v[i]);
    }
}

void escribe_vector(int v[])
{
    int i;
    for (i = 0; i < N; i++)
    {
        printf("v[%d]=%d \n", i, v[i]);
    }
}
void sumar_vectores(int s[], int a[], int b[])
{
    int i;
    for (i = 0; i < N; i++)
    {
        s[i] = a[i] + b[i];
    }
}

int suma_comp_vector(int v[])
{
    int suma = 0, i;
    for (i = 0; i < N; i++)
    {
        suma = suma + v[i];
    }
    return suma;
}

void cambia(char cadena[])
{
    int i;
    for (i = 0; i < strlen(cadena); i++)
        if (i % 2 == 0 && cadena[i]!=' ')
            cadena[i] = '*';
}

int main()
{
    int a[N], b[N], s[N] = {0, 0, 0, 0, 0};
    int sum;
    char cadena[] = "cambia los caracteres (LOS BLANCOS NO) de las posiciones pares de la cadena por *";

    printf("Vector a:\n");
    lee_vector(a);
    printf("Vector b:\n");
    lee_vector(b);
    sumar_vectores(s, a, b);
    printf("Vector suma de los vectores a y b: \n");
    escribe_vector(s);
    sum = suma_comp_vector(a);
    printf("La suma de las componentes del vector a es: %d\n", sum);
    printf("%s\n", cadena);
    cambia(cadena);
    printf("%s\n", cadena);
}