/* */

#include <stdio.h>

int main(void){
	
	short i,j,k,year[]={2005, 2010, 2015, 2019};
	int edo=3;
	int mes=3;
	int anio=1;
	float prom,x,temperatura[edo][mes][anio] = {{{22.6},{22.9},{30.1}},
		                         	     	  {{30.8},{31.9},{27.9}},
		                                	  {{26.0},{26.0},{26.3}}};

	printf("Promedio Anual por estado\n");
  
	for(i=0;i<anio;i++){
		for(j=0;j<edo;j++){
			for(k=0;k<mes;k++){
        		x += temperatura[j][k][i];
			}
			prom = x/mes;
        	printf("\tLa temperatura promedio anual de %d en el estado %d es: %f C\n",year[i],j+1,prom);
        	x=0;
		}
	}
	
	for(i=0;i<anio;i++){
		for(j=0;j<edo;j++){
			for(k=0;k<mes;k++){
				
			}
		}
	}
	return 0;
}
