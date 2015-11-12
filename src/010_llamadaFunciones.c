/**Programa: llamada a funciones
 * Descripción: El objetivo buscado es introducir al alumno en el uso
 * de funciones auxiliares para realizar tareas. La llamada a dichas
 * funciones se hace desde la función principal main */


#include <stdio.h>

int DuplicarValor(int numero){
	return numero*2;
}

int main(){
	
	int numero=20;
	printf("El valor de número es %d al inicio\n",numero);
	numero = DuplicarValor(20);
	printf("El valor de número es %d después de llamar a funcionDuplicar",numero);
	
	return 0;
}