/*
	Compilado en DevC++ 5.11
	
	Alcántara Guerrero Alfredo Guadalupe
*/

#include <stdio.h>
#include <stdlib.h>


struct atleta{
	char nombre[30];
	char pais[30];
	int medallas;
}atletas[10];

void menu();
void guardar(int *);
void comparar(int *, int*);
void imp(int *, int *m);

int main(){
	int a=0,op,med=0;
	printf("Bienvenido\n");
	guardar(&a);
	do{
		menu();
		scanf("%i",&op);
		switch(op){
			case 1:
				if(a<10){
					guardar(&a);
				}else{
					printf("\tNo es posible agragar otro atleta el maximo de atletas ha sido excedido (10)\n\n");
					op=2;
				}
				break;
			case 2:
				printf("\n");
				break;
			default:
				printf("\nOpcion no valida\n");
				break;
		}
	}while(op!=2);
	comparar(&a,&med);
	imp(&a,&med);
	printf("\t\tHasta pronto\n\n");
	system("pause");
	return 0;
}

void menu(){
	printf("Ingresar un nuevo atleta?: \n");
	printf("\t1. Si\n");
	printf("\t2. No\n");
}

void guardar(int *a){
	printf("\tTeclea los datos del atleta %i:\n",*a+1);
	fflush(stdin);
	printf("\tTeclea el nombre: ");
	gets(atletas[*a].nombre);
	fflush(stdin);
	printf("\tTeclea el pais al que pertenece: ");
	gets(atletas[*a].pais);
	printf("\tTeclea el numero de medallas: ");
	scanf("%i",&atletas[*a].medallas);
	*a = *a+1;
}

void comparar(int *a, int *med){
	int i;
	for(i=0;i<*a;i++){
		if(atletas[i].medallas>*med){
			*med=atletas[i].medallas;
		}
	}
}

void imp(int *a, int *med){
	int i;
	printf("El/Los atleta(s) con mas medallas: \n");
	for(i=0;i<*a;i++){
		if(atletas[i].medallas==*med){
			printf("Atleta: %s\t", atletas[i].nombre);
			printf("Pais: %s",atletas[i].pais);
			printf("\tMedallas: %i\n\n",atletas[i].medallas);
		}
	}
}
