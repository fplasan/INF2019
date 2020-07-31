#include <stdio.h>

int leer_fichero(float v[12])
{   // Devuelve 1 si ha leido bien y 0 si falla algo.
    FILE *F;
    int i, dia, mes;
    float n;
    for (i = 0; i < 12; i++)
        v[i] = 0; //INICIALIZACIÓN DEL VECTOR
    F = fopen("lluvias.txt", "r");
    if (F == NULL)
    {
        printf("El fichero no existe:");
        return 0;
    } //SI NO EXISTE EL FICHERO ACABA
    while (fscanf(F, "%d%d%f", &dia, &mes, &n) != EOF)
        //(fscanf(F, "%d%d%f", &dia, &mes, &n)==3) ALTERNATIVA
        if (mes >= 1 && mes <= 12) //COMPROBACION INDICE VECTOR
            v[mes - 1] = v[mes - 1] + n;
    fclose(F);
    return 1;
}

int main()
{
    float lluvias[12];
    int minMes = 0, maxMes = 0, i;
    if (leer_fichero(lluvias) == 1) // Si se ha leido bien el fichero
    {
        for (i = 0; i < 12; i++)
        {
            if (lluvias[i] < lluvias[minMes])
                minMes = i;
            if (lluvias[i] > lluvias[maxMes])
                maxMes = i;
        }
        printf("El mes %d fue el que mas llovio (%.2f mm.)\n", maxMes + 1, lluvias[maxMes]);
        printf("El mes %d fue el que menos llovio (%.2f mm.)\n", minMes + 1, lluvias[minMes]);
    }
    return 0;
    }
    