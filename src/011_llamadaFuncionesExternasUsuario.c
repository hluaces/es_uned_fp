/**Programa: llamada a funciones externas creadas por el usuario
 * Descripción: El objetivo buscado es introducir al alumno en el uso
 * de funciones auxiliares para realizar tareas. La llamada a dichas
 * funciones se hace desde la función principal main */


#include <stdio.h>
#include "000_funcionesAuxiliares.h"

int main(){
	
	int numero=20;
	printf("El valor de número es %d al inicio\n",numero);
	numero = DuplicarValor(20);
	printf("El valor de número es %d después de llamar a funcionDuplicar\n",numero);
	printf("Esto es válido? Qué valor sale por pantalla? %d",DuplicarValor(20));
	
	
	return 0;
}