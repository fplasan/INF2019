//INFORMATICA-2015-2016

#include <stdio.h>
#include <math.h>
#define M 2 //agafats de 2 en 2

int factorial (int n){	
	int fact=1,i;
	for (i=1;i<=n;i++)
	    fact=fact*i;
	return fact;    
	    }
	    
int variacions(int n,int m){
	 return (factorial(n)/factorial(n-m));
		}
	
int variacions_repeticio(int n,int m){ 
	return (pow(n,m));
		}
		   
int combinacions(int n,int m){
	  return (factorial(n)/(factorial(n-m)*factorial(m)));
		}
	
int combinacions_repeticio(int n, int m){ 
	return ( factorial(n+m-1)/(factorial(n-1)*factorial(m)) );
		}

int permutacions (int n){
	return (factorial(n));
		}		   

void escriu_VR(int n){	
	int i,j;     
	for (i=1;i<=n;i++)
   	{for (j=1;j<=n;j++)
    	printf ("(%d %d) ", i, j);
    printf("\n"); 
    }
    printf("_______\n");
		}

void escriu_V(int n){   
	int i,j;
 	for (i=1;i<=n;i++)
		{for (j=1;j<=n;j++)
		   if (i!=j)printf ("(%d %d) ", i, j);
		   else printf ("     ");
		printf("\n"); 
		} 
	printf("_______\n");
}
 
void escriu_C(int n){   
	int i,j;
	for (i=1;i<=n;i++)
		{for (j=i+1;j<=n;j++)
		   printf ("(%d %d) ", i, j);
		printf("\n"); }
	printf("_______\n");
}

void escriu_CR(int n){   
	int i,j;
    for (i=1;i<=n;i++)
		{for (j=i;j<=n;j++)
		   printf ("(%d %d) ", i, j);
		printf("\n"); 
		} 
	printf("_______\n");	
}

int main(){ 
	int i,j;
    int N; //nombre d'elements
	
	printf ("Nombre elements:");
	scanf("%d",&N);
	
	printf("variacions (amb repeticio), VR n,m =n^m: %d\n",variacions_repeticio(N,M));
    escriu_VR(N);

	printf("variacions (sense repeticio): V n,m = n!/(n-m)!: %d\n",variacions(N,M) );
    escriu_V(N);
	
	printf("combinacions (sense repeticio): Cn,m=n!/(n-m)!*m!: %d\n",combinacions(N,M));	
	escriu_C(N);	
	 	
	printf("combinacions (amb repeticio): CRn,m= (n+m-1)!/(n-1)!*m!: %d\n",combinacions_repeticio(N,M));	
	escriu_CR(N);
		
	printf("permutacions: Pn=n!: %d \n", permutacions(N));
	
    getchar();getchar();
	return 0;

}
