#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>

/* http://letradni.appspot.com/info.html */
/* numero de cifras para el DNI*/

    #define kTAM 8
 
    int dig2num (char c){
		return c-48;
	}
		 
    void leer_dni(char dni_c[]){
        do{
        printf("Dame el DNI:");
        scanf("%s",dni_c);
        }while(strlen(dni_c)!=kTAM); 
    }   
 
    int main(){   
		char dni_c[kTAM+1];
        int i_dni,dni=0,pot=0,i;
        int dni_num[kTAM+1];
        char letra[] = "TRWAGMYFPDXBNJZSQVHLCKE";
        int correcto;
        
       do{correcto=1;
          leer_dni(dni_c);
          for (i=0;(i<kTAM && correcto==1);i++){
			dni_num[i]=dig2num(dni_c[i]);
			if (dni_num[i]>9 || dni_num[i]<0)
			   correcto=0;
			}
		}while (correcto==0);
			
		pot=kTAM-1;	
		for (i=0;i<kTAM;i++)
		   {dni=dni+dni_num[i]*pow(10,pot);
			pot--;}	
        
        i_dni =dni % 23;
        printf("Correcto\n");
        printf("%d-%c\n", dni,letra[i_dni]);
        
        //getchar();
        return 0;
    }
