#include <stdio.h>
#include <string.h>

typedef struct 
{
    unsigned char B0 : 1;
    unsigned char B1 : 1;
    unsigned char B2 : 1;
    unsigned char B3 : 1;
    unsigned char B4 : 1;
    unsigned char B5 : 1;
    unsigned char B6 : 1;
    unsigned char B7 : 1;
}bit_t;

#define REG_BIT(reg,bit)    ((volatile bit_t *)&reg) -> B##bit

#define FIN_DE_CARRERA  REG_BIT(carrera,5)

//funcion que permite convertir en formato binario un numero entero
const char *byte_to_binary(int x) {
    static char b[9]; b[0] = '\0'; 
    int z; 
    for (z = 128; z > 0; z >>= 1) {
         strcat(b, ((x & z) == z) ? "1" : "0"); } 
         return b; 
    }



int main(int argc, char const *argv[])
{
    char carrera=0;
   
    FIN_DE_CARRERA = 0;

    for(char i=0;i<10;i++){
        FIN_DE_CARRERA ^=1;
        if(FIN_DE_CARRERA){
            printf("El bit 5 esta en 1, y el registro carrera vale: 0b%s\n",byte_to_binary(carrera));
        }else{
            printf("El bit 5 esta en 0, y el registro carrera vale: 0b%s\n",byte_to_binary(carrera));
        }
    }

}
