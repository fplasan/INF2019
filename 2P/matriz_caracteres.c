#include <stdio.h>
#include <string.h>

#define F 12
#define C 12

void lee_meses(char m[F][C])
{
    int i;
    for ( i = 0  ;  i < F  ;  i++ )
    {printf("mes %d:",i+1);
        gets(m[i]);}
}

void escribe_meses(char m[F][C])
{
    int i;
    for ( i = 0  ;  i < F  ;  i++ )
    {printf("mes %d: %s\n",i+1,m[i]);
    }
}

int main()
{ char m[F][C];
      lee_meses(m);
      escribe_meses(m);
      
            
return 0;
}
