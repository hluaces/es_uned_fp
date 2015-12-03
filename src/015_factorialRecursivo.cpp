/**Programa: FactorialRecursivo
 * Fuente: Libro asignatura Fundamentos de Programación UNED. Cerrada Somolinos et al.
 * Descripción: El objetivo buscado es introducir al alumno en el uso
 * de la recursividad */

#include <stdio.h>

int FactorialRecursivo(int n){
	if(n<=1){
		return 1;
	} else{
		return n*FactorialRecursivo(n-1);
	}
}

int main(){
	for (int i=0;i<=10;i++){
		printf("%2d! vale:%10d\n",i,FactorialRecursivo(i));
	}
	return 0;
}
