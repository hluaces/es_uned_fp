/**Programa: sentencia if else anidada. Diferentes tarifas según edad
 * Fuente: Libro asignatura Fundamentos de Programación UNED. Cerrada Somolinos et al.
 * Descripción: El objetivo buscado es introducir al alumno en el uso
 * de la secuencia de acciones if else. En este caso se muestra anidación de secuencias*/
 
#include <stdio.h>

int main()
{
	int edad;
	float tarifa;
	int precioEntrada = 100;
	printf("Hola!! que edad tienes?\n");
	scanf("%d",&edad);
	if(edad<6){
		tarifa = 0.0;
	}else{
		if(edad<18){
			tarifa = 0.5;
		}else{
			if(edad<65){
				tarifa = 1.0;
			}else{
				tarifa = 0.25;
			}
		}
	}
	
	printf("De acuerdo con tu edad, el precio de tu entrada es %0.f",tarifa*precioEntrada);
	
	return 0;
}