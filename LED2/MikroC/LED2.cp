#line 1 "E:/PROYECTOS CON MICROCONTROLADORES/Proyectos con Microcontroladores/3. MikroIngeniería - Proyectos con Microcontroladores/01. LED/LED2/MikroC/LED2.c"
#line 20 "E:/PROYECTOS CON MICROCONTROLADORES/Proyectos con Microcontroladores/3. MikroIngeniería - Proyectos con Microcontroladores/01. LED/LED2/MikroC/LED2.c"
int i;

void main(void){

 TRISB = 0x00;

 do{

 for(i=0; i<=255; ++i){

 PORTB = i;

 delay_ms(500);

 }

 }while(1);

}
