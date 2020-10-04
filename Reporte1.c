/* */

#include <stdio.h>

int main(void){
	char n=164,g=248;
	short i,j,k,z,a,e,year[4]={2005, 2010, 2015, 2019};
	int edo=3;
	int mes=3;
	int anio=1;
	float x,y=0,temperatura[edo][mes][anio] = {{{22.6},{22.9},{30.1}},
		                         	   {{30.8},{31.9},{27.9}},
		                               	   {{26.0},{26.0},{26.3}}};

	printf("Temperatura promedio Anual por estado:\n");
  
	for(i=0;i<anio;i++){
		printf("\tA%co: %d\n",n,year[i]);
		for(j=0;j<edo;j++){
			for(k=0;k<mes;k++){
				x += temperatura[j][k][i];
				if (temperatura[j][k][i]>y){
					y= temperatura[j][k][i];
					e=j+1;
					z=k+1;
					a=i;
				}
			}
			x = x/mes;
        		printf("\t\tEstado %d: %f%cC\n",j+1,x,g);
        		x=0;
		}
		printf("La maxima temperatura del a%co %d es: \n\t%f%cC en el estado %d, el mes %d",n,year[a],y,g,e,z);
		printf("\n\n%c",g);
	}
	printf("Para salir presione cualquier tecla");
	getchar();
	return 0;
}
