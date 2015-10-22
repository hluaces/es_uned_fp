/**Programa: sentencia if else
 * Descripción: El objetivo buscado es introducir al alumno en el uso
 * de la secuencia de acciones if else */
 
#include <stdio.h>

int main()
{
	int edad;
	printf("Hola!! que edad tienes?\n");
	scanf("%d",&edad);
	if(edad<18){
		printf("El acceso no está permitido para menores de 18 años, tu tienes %d",edad);
	}else{
		printf("Acceso permitido!!!");
	}
	
	return 0;
}