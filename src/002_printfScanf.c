/**Programa: printfScanf
 * El objetivo buscado es introducir al alumno en el uso de los
 * procedimientos printf y scanf*/
 
#include <stdio.h>

int main()
{
	int edad = 0;
	printf("Hola!! que edad tienes?\n");
	scanf("%d",&edad);
	printf("Que bien te conservas para tener %d años!!! ;)",edad);
	return 0;
}