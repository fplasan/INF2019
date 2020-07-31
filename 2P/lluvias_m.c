#include <stdio.h>

int leer_fichero(float m[12][31])
{
FILE* F;
int i,j, dia, mes;
float n;
for (i = 0; i < 12; i++)
    for (j=0;j<31;j++)
            m[i][j] = 0.0; //INICIALIZACIÓN DE LA MATRIZ
F = fopen("lluvias.txt", "r");
if (F==NULL)
{
printf ("El fichero no existe.");
return 0;
} //COMPROBACIÓN DE QUE EXISTA EL FICHERO
while (fscanf(F, "%d%d%f", &dia, &mes, &n)!=EOF)
{//ALTERNATIVA (fscanf(F, "%d%d%f", &dia, &mes, &n)==3)
    if (mes>=1 && mes<=12) //COMPROBACION
        if (dia>=1 && dia<=31)
            m[mes-1][dia-1]=n;
}
fclose(F);
return 1;
}


int main() 
{
float lluvias[12][31];
int i,dias_mes_llovidos=0,j;
if (leer_fichero(lluvias)==1)
{
for (i = 0; i < 12; i++)
{
    dias_mes_llovidos=0;
    for (j=0; j<31; j++)
        if (lluvias[i][j] > 0 ) dias_mes_llovidos++;
            printf("El mes %d ha llovido %d dias\n",i+1,dias_mes_llovidos);
}
}
return 0;
}