#include<stdio.h>

#define operacion(x)    (x*x + 2*x  -1)

#define imprimir(exp)   if(exp > 2){\
                            printf(#exp" = %.2f\n",exp);\
                            printf("fin\n");} \
                        else{\
                            printf("fuera de rango\n");\
                            printf("fin\n");} \   
                        
#define concatenar(x,y)    x##y        

#define MIN(A,B)    (A<B? A:B)


int main(){
    float x=1;
    float y=2;
    char a='h';
    char b='J';
    char valor[3];
    printf("El valor de x ahora es: %.2f\n",operacion(x));
    imprimir(x);
    printf("El valor concatenado es: %.d\n",concatenar(2,3));

    printf("El numero menor es: %d",MIN(5,8));
    return 0;
}