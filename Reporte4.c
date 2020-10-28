/*
	Elaborado por: Alcántara Guerrero Alfredo Guadalupe
	Compilado en: Dev-C++ version: 5.11
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
	int nom, ape, a=-93;
	char *nombre, *nombre2;
	printf("Bienvenido\n\tTeclea el n%cmero de letras del nombre\n\t",a);
	scanf("%d",&nom);
	nombre = (char *)malloc (nom * sizeof(char));
	if (nombre!=NULL) {
		printf("Ingresa el nombre: ");
		fflush(stdin);
		gets(nombre);
		printf("\tTeclea el n%cmero de letras del apellido\n\t",a);
		scanf("%d",&ape);
		nom = strlen(nombre);
		ape += nom+1;
		nombre2 = (char *)realloc (nombre,ape*sizeof(char));
		if (nombre2 != NULL) {
			nombre = nombre2;
			*(nombre+nom) =  ' ';
			nom += 1;
			printf("Ingresa el apellido: ");
			fflush(stdin);
			gets((nombre+nom));
			printf("\nEl nombre completo es: %s\n\n",nombre);
		}else{
			printf("\nNo se pudo reservar memoria\n\n");
		}
	}else{
		printf("\nNo se pudo reservar memoria\n\n");
	}
	free (nombre);
	system("pause");
	return 0;
}
