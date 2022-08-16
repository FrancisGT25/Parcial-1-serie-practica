
_main:

;LED2.c,22 :: 		void main(void){             // Iniciamos el programa principal
;LED2.c,24 :: 		TRISB = 0x00;             // Seteamos el puerto B como salida
	CLRF       TRISB+0
;LED2.c,26 :: 		do{                       // Iniciamos el bucle do ... While infinito
L_main0:
;LED2.c,28 :: 		for(i=0; i<=255; ++i){  // Declaramos FOR incrementando de 0 a 255
	CLRF       _i+0
	CLRF       _i+1
L_main3:
	MOVLW      128
	MOVWF      R0+0
	MOVLW      128
	XORWF      _i+1, 0
	SUBWF      R0+0, 0
	BTFSS      STATUS+0, 2
	GOTO       L__main8
	MOVF       _i+0, 0
	SUBLW      255
L__main8:
	BTFSS      STATUS+0, 0
	GOTO       L_main4
;LED2.c,30 :: 		PORTB = i;             // Salida por el puerto B, la variable "i"
	MOVF       _i+0, 0
	MOVWF      PORTB+0
;LED2.c,32 :: 		delay_ms(500);         // Tiempo de espera de 500ms
	MOVLW      3
	MOVWF      R11+0
	MOVLW      138
	MOVWF      R12+0
	MOVLW      85
	MOVWF      R13+0
L_main6:
	DECFSZ     R13+0, 1
	GOTO       L_main6
	DECFSZ     R12+0, 1
	GOTO       L_main6
	DECFSZ     R11+0, 1
	GOTO       L_main6
	NOP
	NOP
;LED2.c,28 :: 		for(i=0; i<=255; ++i){  // Declaramos FOR incrementando de 0 a 255
	INCF       _i+0, 1
	BTFSC      STATUS+0, 2
	INCF       _i+1, 1
;LED2.c,34 :: 		}                       // Termina la función FOR
	GOTO       L_main3
L_main4:
;LED2.c,36 :: 		}while(1);                // Termina el bucle do ... While infinito
	GOTO       L_main0
;LED2.c,38 :: 		}                            // Termina el programa principal
L_end_main:
	GOTO       $+0
; end of _main
