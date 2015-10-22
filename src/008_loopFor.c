/**Programa: factorial
 * Fuente (modificado): Libro asignatura Fundamentos de Programación UNED. Cerrada Somolinos et al.
 * Descripción: El objetivo buscado es introducir al alumno en el uso
 * del bucle for*/
 
#include <stdio.h>

int main()
{
	int numero;
	int factorial = 1;
	
	printf("Dime un número y calcularé su factorial\n");
	scanf("%d",&numero);
	
	for(int indice = 2; indice <= numero; indice++){
		factorial = factorial * indice;
	}
	
	printf("El factorial de %d vale %d\n",numero,factorial);
	printf("Ojo!! al salir del bucle la variable número vale %d",numero);

	/* Cuánto vale la variable indice al salir del bucle?
	 * printf("Ojo!! al salir del bucle la variable indice vale %d",indice);
	 * por qué?*/
	
	return 0;
}