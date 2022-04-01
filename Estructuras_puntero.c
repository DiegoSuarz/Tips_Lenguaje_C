
#include <stdio.h>
#include <stdlib.h>


typedef struct {
	char nombre[20];
	char apellidos[50];
	int edad;
	float altura;
}persona;

//declaracion de variables de estructura

typedef persona *ptrPersona;
ptrPersona Rob;

/********************************************************/
ptrPersona InfoPersona_ptr(void);

int main(void) {



	Rob = InfoPersona_ptr();
	//printf("nombre: %s",Rob->nombre);
	system("pause");
	return 0;
}


ptrPersona InfoPersona_ptr(void){  //devuelve un dato tipo puntero
	ptrPersona xPersona;
	printf("Ingrese información del Usuario\n");
	printf("Nombre: ");
	scanf("%s",xPersona->nombre);
	printf("\nApellido: ");
	scanf("%s",xPersona->apellidos);
	printf("\nAltura: ");
	scanf("%f",&xPersona->altura);
	printf("\nEdad: ");
	scanf("%d",&xPersona->edad);
	return xPersona;
}
