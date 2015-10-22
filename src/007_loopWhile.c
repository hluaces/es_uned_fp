/**Programa: factorial
 * Fuente (modificado): Libro asignatura Fundamentos de Programación UNED. Cerrada Somolinos et al.
 * Descripción: El objetivo buscado es introducir al alumno en el uso
 * del bucle while*/
 
#include <stdio.h>

int main()
{
	int numero;
	int factorial = 1;
	int datoUsuario;
	
	printf("Dime un número y calcularé su factorial\n");
	scanf("%d",&datoUsuario);
	
	numero = datoUsuario;
	
	while (numero > 1){
		factorial = factorial *numero;
		numero--;
	}
	
	printf("El factorial de %d vale %d\n",datoUsuario,factorial);
	printf("Ojo!! al salir del bucle la variable número vale %d",numero);
	
	return 0;
}