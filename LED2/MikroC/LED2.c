
////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//WEB        :  WWW.MIKROINGENIERIA.COM                                       //
//                                                                            //
//TÍTULO     :  PROYECTOS CON MICROCONTROLADORES                              //
//                                                                            //
//PROYECTO   :  CONTADOR BINARIO DE 0 A 255                                   //
//                                                                            //
//AUTOR      :  MGTR. ING. BRYAM HUAMANCHUMO BACA                             //
//                                                                            //
//COMPILADOR :  MIKROC PRO for PIC                                            //
//                                                                            //
//MICROCONTROLADOR :  PIC16F84A                                               //
//                                                                            //
//OSCILADOR        :  4MHz                                                    //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

int i;                       // Definimos variable como entero

void main(void){             // Iniciamos el programa principal

   TRISB = 0x00;             // Seteamos el puerto B como salida

   do{                       // Iniciamos el bucle do ... While infinito

     for(i=0; i<=255; ++i){  // Declaramos FOR incrementando de 0 a 255

      PORTB = i;             // Salida por el puerto B, la variable "i"

      delay_ms(500);         // Tiempo de espera de 500ms

     }                       // Termina la función FOR

   }while(1);                // Termina el bucle do ... While infinito

}                            // Termina el programa principal