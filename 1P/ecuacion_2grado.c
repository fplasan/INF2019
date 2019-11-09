/*
 Resolución de una ecuación de segundo grado: ax2 + bx + c = 0 .
*/

#include <stdio.h>
/*#include <conio.h>*/
#include <math.h>

int main()
{
    float a, b, c, x, dis, x1, x2;

    //printf("Resolucion de una ecuacion de segundo grado: ax2 + bx + c = 0\n\n");
    printf("Introduzca los coeficientes a, b y c: ");
    scanf("%f%f%f", &a, &b, &c);

    //putchar('\n');
    if ( a == 0) {
        /* Resolver b x + c = 0 */
        if ( b == 0 )
            /* La ecuación es c = 0 */
            if ( c == 0 )
                /* La ecuación es 0 = 0 */
                printf("Infinitas soluciones.\n");
            else
                printf("No hay solucion.\n");
        else {
            x = -c / b;
            printf("Solucion: %.2f\n", x);
        }
    } else {
        dis = b * b - 4 * a * c;
        if ( dis > 0) {
            /* Dos soluciones reales */
            dis = sqrt(dis);
            x1 = ( -b + dis ) / ( 2.0 * a );
            x2 = ( -b - dis ) / ( 2.0* a );
            printf("Soluciones: %.2f y %.2f\n", x1, x2);
        } else if ( dis < 0 ) {
            /* Dos soluciones complejas */
            dis = sqrt(-dis);
            x1 = -b / ( 2.0* a ); /* Parte real */
            x2 = dis / ( 2.0* a ); /* Parte compleja */
            printf("Soluciones: \n%.2f + %.2fi \n%.2f - %.2fi\n", x1, x2, x1, x2);
        } else { /* dis == 0*/
            /* Una solución doble */
            x = -b / ( 2.0 * a );
            printf("Solucion doble: %.2f\n", x);
        }
    }

  /*getch();*/
  return 0;  
}
