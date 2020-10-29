#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct ElementoNodo{
    char *dato; 
    struct ElementoNodo *siguiente;
} Nodo;

typedef struct ListaUbicacion{
    Nodo *inicio;
    int tamanio;
} Pila;

void inicializacion (Pila *apunta){
    apunta->inicio = NULL; 
    apunta->tamanio = 0; 
}


int apilar (Pila *apunta, char *dato){
    Nodo *nuevo_elemento;
    if ((nuevo_elemento = (Nodo *) malloc (sizeof (Nodo))) == NULL)
        return -1;
    if ((nuevo_elemento->dato = (char *) malloc (50 * sizeof (char))) == NULL)
        return -1;
    strcpy(nuevo_elemento->dato, dato);
    nuevo_elemento->siguiente = apunta->inicio;
    apunta->inicio = nuevo_elemento;
    apunta->tamanio++;
}


int desapilar (Pila *apunta){
    Nodo *sup_elemento;
    if (apunta->tamanio == 0)
        return -1;
    sup_elemento = apunta->inicio; 
    apunta->inicio = apunta->inicio->siguiente;
    free (sup_elemento->dato);
    free (sup_elemento);
    apunta->tamanio--;
    return 0;
}



void muestra (Pila *apunta){
    Nodo *actual;
    int i;
    actual = apunta->inicio;
    for(i=0;i<apunta->tamanio;++i){
        printf("\t\t%s\n", actual->dato);
        actual = actual->siguiente;
    }
}

int main (){

    Pila *apunta;
    char *nom;
	int a=-96, o=-94,op=0; 
    if ((apunta = (Pila *) malloc (sizeof (Pila))) == NULL)
        return -1;
    if ((nom = (char *) malloc (50 * sizeof (char))) == NULL)
        return -1;
    inicializacion(apunta);
    printf("**********Bienvenido**********");
    do{
    	printf("\nSelecciona una opci%cn\n\t1)PUSH\n\t2)POP\n\t3)Imprimir pila\n\t4)Salir\n",o);
    	scanf("%d",&op);
    	switch(op){
    		case 1:
    			printf ("Ingrese una palabra: ");
    			scanf ("%s", nom);
    			apilar (apunta, nom);
    			break;
    		case 2:
    			if(apunta->tamanio == 0){
    				printf("\n**********La pila est%c vacia**********\n",a);
				}
				else{
    				printf ("\nLa ultima entrada (LastInFirstOut) [ %s ] sera eliminada", apunta->inicio->dato);
    				desapilar (apunta);
    				printf ("\nLa ultima entrada fue eliminada\n");
				}
    			break;
    		case 3:
    			if(apunta->tamanio == 0){
    				printf("\n**********La pila est%c vacia**********\n",a);
				}
				else{
    				printf ("\nPila (%d elementos): \n",apunta->tamanio);
    				printf("\n********** Tope de la PILA **********\n");
    				muestra(apunta);
   					printf("__________ Bajo de la PILA __________\n\n");
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
