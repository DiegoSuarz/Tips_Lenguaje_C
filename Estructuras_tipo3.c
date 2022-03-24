#include <stdio.h>
#include <stdint.h>


#define DIR_RTC 0xD0



typedef struct{ //DATOS DEL RTC
    uint8_t segundos;
    uint8_t minutos;
    uint8_t horas;
    uint8_t dias;
    uint8_t dates;
    uint8_t  meses;
    uint8_t  years;
}datosRTC; 

datosRTC data = {13,14,14,5,6,7,31}; //forma para inicializar miembros de estructuras


//struct datosRTC data;

int main(void) {
    // //forma para inicializar miembros de estructuras para cada miembro 
    // datosRTC data;
    
    // data.segundos=18;
    // data.minutos=14;
    // data.horas=11;
    // data.dates=13;
    // data.dias=14;
    // data.meses=3;
    // data.years=28;
    
        
    printf("Direccion i2c: 0x%X, segundos: %d\n",DIR_RTC,data.segundos);
    printf("Direccion i2c: 0x%X, minutos: %d\n",DIR_RTC,data.minutos);
    printf("Direccion i2c: 0x%X, horas: %d\n",DIR_RTC,data.horas);
    printf("Direccion i2c: 0x%X, dates: %d\n",DIR_RTC,data.dias);
    printf("Direccion i2c: 0x%X, dias: %d\n",DIR_RTC,data.dates);
    printf("Direccion i2c: 0x%X, meses: %d\n",DIR_RTC,data.meses);
    printf("Direccion i2c: 0x%X, years: %d\n",DIR_RTC,data.years);
    
        
    return 0;
}