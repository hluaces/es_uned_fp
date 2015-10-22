/**Programa: sentencia if elseif en cascada. Diferentes tarifas según edad
 * Fuente: Libro asignatura Fundamentos de Programación UNED. Cerrada Somolinos et al.
 * Descripción: El objetivo buscado es introducir al alumno en el uso
 * de la secuencia de acciones if elseif. En este caso se muestran secuencias en cascada*/
 
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
	}else if(edad<18){
		tarifa = 0.5;
	}else if(edad<65){
		tarifa = 1.0;
	}else{
		tarifa = 0.25;
	}
	
	printf("De acuerdo con tu edad, el precio de tu entrada es %0.f",tarifa*precioEntrada);
	
	return 0;
}