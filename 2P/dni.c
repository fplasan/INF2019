#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/* http://letradni.appspot.com/info.html */
 
    /* numero de cifras para el DNI */
    #define kTAM 8
 
    int main()
    {
        int  dni,resto;
        char dni_c[9];
        char letra[] = "TRWAGMYFPDXBNJZSQVHLCKE";
        
        do{
        printf("Dame el DNI:");
        gets(dni_c);
        }while(strlen(dni_c)!=8);
        
        dni = atoi (dni_c); /*atoi: función que pasa de caracter a entero */
        resto=dni % 23;
        printf("%s-%c\n", dni_c,letra[resto]);
        //getch();
        return 0;
    }
