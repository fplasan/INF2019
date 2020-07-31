#include <stdio.h>
#include <string.h>

int nueva_strcmp(char s1[], char s2[])
{
    int i;
    for ( i=0 ; s1[i]!='\0' && s1[i]==s2[i] ; i++ )
        /* nada */;
    return s1[i] - s2[i];
}

int main(){
    char c1[10]="Hola";
    char c2[10]="Holas";
    char c3[10]="Hola";
    printf("%s %s %s\n",c1,c2,c3);
    printf("%lu %lu %lu\n",strlen(c1),strlen(c2),strlen(c3));

    printf("1-2: %d\n",nueva_strcmp(c1,c2));
    printf("2-1: %d\n",nueva_strcmp(c2,c1));
    printf("3-1: %d\n",nueva_strcmp(c3,c1));
    printf("3-1: %d\n",strcmp(c3,c1));

    return 0;
}