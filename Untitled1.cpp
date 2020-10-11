#include<stdio.h>

void apro(int[][3],int n);
void prom(int a[][3],int n);
void imprimir(int a[][3], int n);
int g=168,b=164;

int main(){
    int alu[30][3],n,i,j=0;
    
    printf("Bienvenido, %cCuantos alumnos desea ingresar?\n",g);
    scanf("%i",&n);
    
    for(i=0;i<n;i++){
    	/*printf("\tIngrese el numero de cuenta del alumno %i (sin guion ni espacios):\n\t\t",i+1);
		scanf("%i",&alu[i][j]);*/
		printf("\tIngrese la edad del alumno %i (solo la cifra):\n\t\t",i+1);
		scanf("%i",&alu[i][j+1]);
		printf("\tIngrese la calificacion del alumno %i (en entero):\n\t\t",i+1);
		scanf("%i",&alu[i][j+2]);
		printf("\n");
	}
	apro(alu,n);
	prom(alu,n);
	imprimir(alu,n);
    return 0;
}

void apro(int a[][3], int n){
	int i,j=2,c=0;
	float x=0,prom;
	for(i=0;i<n;i++){
		if(a[i][j]>=6){
			x+=a[i][j-1];
			c++;
		}
    }
    prom=x/c;
    printf("La edad promedio de los alumnos con calificacion mayor o igual a 6.0 es: %.2f a%cos",prom,b);
    printf("\n");
}

void prom(int a[][3], int n){
	int i,j=2;
	float x=0,prom;
	for(i=0;i<n;i++){
		x+=a[i][j];
    }
    prom=x/n;
    printf("El promedio grupal es: %.2f",prom);
    printf("\n");
}

void imprimir(int a[][3], int n){
	int i,j=0;
	printf("\nLos datos de los alumnos ingresados son:");
	for(i=0;i<n;i++){
		printf("\nAlumno %i:\n",i+1);
    	printf("Numero de cuenta: %i\tEdad: %i\tCalificacion: %i\n\n",a[i][j],a[i][j+1],a[i][j+2]);
    }
}
