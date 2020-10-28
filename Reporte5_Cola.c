#include <stdlib.h>
#include <stdio.h>

typedef struct nodo{
   int valor;
   struct nodo *siguiente;
} tipoNodo;

typedef tipoNodo *pNodo;

void Insertar(pNodo *primero, pNodo *ultimo, int v);
int Eliminar(pNodo *primero, pNodo *ultimo);
void Imprimir(pNodo *primero, pNodo *ultimo);

int main() {
   pNodo primero = NULL, ultimo = NULL;
   int a=-96, o=-94,op=0,x,u=-93; 
   printf("Bienvenido");
   do{
    	printf("\nSelecciona una opci%cn\n\t1)QUEUE\n\t2)DEQUEUE\n\t3)Imprimir cola\n\t4)Salir\n",o);
    	scanf("%d",&op);
    	switch(op){
    		case 1:
    			printf("Ingrese un n%cmero: ",u);
    			scanf("%i",&x);
    			Insertar(&primero, &ultimo, x);
    			break;
    		case 2:
    			if(!primero){
    				printf("\n**********La cola est%c vacia**********\n",a);
				}
				else{
    				printf("\nEliminar: %d\n", Eliminar(&primero, &ultimo));
				}
    			break;
    		case 3:
    			if(!primero){
    				printf("\n**********La cola est%c vacia**********\n",a);
				}
				else{
					printf("\n********* INICIO de la COLA *********\n");
    				Imprimir(&primero,&ultimo);
    				printf("__________ fin de la COLA __________\n\n");
				}
    			break;
    		case 4:
    			printf("\n**********Hasta pronto**********\n\n");
    			break;
    		default:
    			printf("\n**********Opci%cn invalida**********\n",o);
    			break;
		}
	}while(op!=4);
	system("pause");
	return 0;
}

void Insertar(pNodo *primero, pNodo *ultimo, int v) {
	pNodo nuevo;
	
	nuevo = (pNodo)malloc(sizeof(tipoNodo));
	nuevo->valor = v;
	nuevo->siguiente = NULL;

 	if(*ultimo) 
    	(*ultimo)->siguiente = nuevo;
   	*ultimo = nuevo; 
   	if(!*primero) 
    	*primero = nuevo; 
}

int Eliminar(pNodo *primero, pNodo *ultimo) {
	pNodo nodo;
	int v;

	nodo = *primero;
	if(!nodo) 
    	return 0; 
	*primero = nodo->siguiente;  
	v = nodo->valor;
	free(nodo);
	if(!*primero) 
    	*ultimo = NULL;

	return v;
}

void Imprimir(pNodo *primero, pNodo *ultimo) {
	pNodo nodo, nodo2=NULL;
	nodo = *primero;
	do{
		printf("\t\t%d\n", nodo->valor);
		nodo = nodo->siguiente;
	}while(nodo != nodo2);
}
