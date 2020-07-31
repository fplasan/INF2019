//
//  escriu_frase_reves_per_paraules.c
//  
//
//  Created by fpla on 4/12/16.
//
//


#include <stdio.h>
#include <string.h>
#define N 100
#define BLANC ' '

void escriu_frase(char cad[])
{
    int i,j,final,principi;
    i=strlen(cad)-1;
    while (i>=0)
    {if (cad[i] == BLANC) i--;
    else
    {final=i;
        while (cad[i]!= BLANC && i>=0)
            if (i>0) i--;
            else i=-1;
        principi=i+1;
        for (j=principi; j<=final;j++)
            printf("%c",cad[j]);
        printf(" ");
    }
    }
printf("\n");
}

int main()
{
    char cad[N];
    printf("Entra una frase:");
    gets(cad);
    printf("%s\n",cad);
    escriu_frase(cad);
    return 0;
}
