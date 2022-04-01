#include <stdio.h>
#include <stdint.h>

typedef struct {
	char nombre[20];
	char apellidos[50];
	int edad;
	float altura;
}persona;

persona Diego;

void InfoPersona(void);

int main(){
    printf("hola mundo\n");
    InfoPersona();
    return 0;
}

void InfoPersona(void){
	printf("Ingrese información del Usuario\n");
	printf("Nombre: ");
	scanf("%s",Diego.nombre);
    printf("nombre: %s",Diego.nombre);
	printf("\nApellido: ");
	scanf("%s",Diego.apellidos);
	printf("\nAltura: ");
	scanf("%f",&Diego.altura);
	printf("\nEdad: ");
	scanf("%d",&Diego.edad);
}