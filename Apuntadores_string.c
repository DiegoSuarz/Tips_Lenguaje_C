#include <stdio.h>

int main(int argc, char *argv){
    int cadena[]={'E','J','E','M','P','L','O',' ','C','O','N',' ','P','U','N','T','E','R','O','S',0};
    int *ptr,i;
    ptr=cadena;
    printf("Longitud: %d\n",sizeof(cadena));
    
    for(i=0; i< sizeof(cadena)/sizeof(int);i++){
        printf("Memoria: %x, Valor: %c\n",ptr,*ptr);
        ptr++;
    }

    return 0;
}