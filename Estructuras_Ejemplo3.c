#include <stdio.h>

//Inicializacion de structuras

//Inicializacion en tiempo de compilación
struct sensor
{
    int medicion;
    char id[8];
    float medicion_c;
}; //crear una instancia

struct sensor sensor_1 = {.medicion=1 , .id = "SNM01"};
struct sensor sensor_2 = {.medicion=20 , .id = "SNM023"};

float foo(int medicion);

int main(){
    
    printf("Medicion: %u, Medicion_C: %f",sensor_1.medicion, foo(sensor_1.medicion));
    return 0;
}

float foo(int medicion){
    return ((float)medicion)*2.5;
}