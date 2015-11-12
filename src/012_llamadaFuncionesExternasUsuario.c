/**Programa: llamada a funciones externas creadas por el usuario
 * Descripción: El objetivo buscado es introducir al alumno en el uso
 * de funciones auxiliares para realizar tareas. La llamada a dichas
 * funciones se hace desde la función principal main */


#include <stdio.h>

// ¿Cuál de las dos debemos poner?
//#include "000_funcionesAuxiliares.h"
//#include <000_funcionesAuxiliares.h>

int main(){
	
	int primerValor=20;
	int segundoValor=30;
	
	printf("El valor máximo es %d\n",Maximo(primerValor,segundoValor));
	
	return 0;
}