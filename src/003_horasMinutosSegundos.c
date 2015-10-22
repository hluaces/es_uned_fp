/**Programa: horasMinutosSegundos
 * Fuente: Libro asignatura Fundamentos de Programación UNED. Cerrada Somolinos et al.
 * Descripción: El objetivo buscado es introducir al alumno en el uso de los
 * procedimientos printf y scanf. Sirve además para aplicar
 * operaciones matemáticas y conversiones*/
 
#include <stdio.h>

int main()
{
	int horas, minutos, segundos;
	printf("Que cantidad de segundos quieres convertir?: ");
	scanf("%d",&segundos);
	horas = segundos / 3600;
	segundos = segundos % 3600;
	minutos = segundos / 60;
	segundos = segundos %60;
	printf("Equivalen a %2d horas %2d minutos y %d segundos\n",horas, minutos, segundos);
	return 0;
}