#include <xc.h>                 // Incluimos el fichero XC general
#pragma config FOSC = XT        // Configuración del Oscilador modo XT
#pragma config WDTE = OFF       // Configuración del Watchdog Timer Enable deshabilitado
#define _XTAL_FREQ 4000000      // Frecuencia del oscilador de PIC(4MHz)
int i;                          // Definimos variable "i" como entero

void main(void) {               // Inicia el programa principal
    TRISB = 0x00;               // Seteamos el puerto B como salida
    do{                         // Iniciamos el bucle do ... While infinito
        for(i=0; i<=255; ++i){  // Declaramos FOR incrementando de 0 a 255
            PORTB = i;          // Declaramos la salida del PIN_B0 en alto
            __delay_ms(500);    // Tiempo de espera de 500ms
        }                       // Termina la función For
    }while(1);                  // Termina el bucle do ... While infinito
}                               // Termina el programa principal
