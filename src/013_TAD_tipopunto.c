/**Programa: TAD_tipopunto
 * Fuente: Libro asignatura Fundamentos de Programación UNED. Cerrada Somolinos et al.
 * Descripción: El objetivo buscado es introducir al alumno en el uso
 * de los TAD
 * Requisitos: ejecutar en el entorno C+- de la asignatura */
 
#include <stdio.h>
#include <math.h>

typedef struct TipoPunto{
	float x;
	float y;
	
	void Leer();
	void Escribir();
	
	float Distancia( TipoPunto p);
};

typedef enum TipoPuntoError { PuntoNoLeido};

void TipoPunto::Leer(){
	int campos;
	
	campos = scanf("(%g,%g)",&x,&y);
	if(campos < 2){
		throw PuntoNoLeido;
	}
}

void TipoPunto::Escribir(){
	printf("(%g,%g)",x,y);
}

float TipoPunto::Distancia(TipoPunto p){
	float deltaX, deltaY;
	
	deltaX = x - p.x;
	deltaY = y - p.y;
	return sqrt (deltaX*deltaX + deltaY*deltaY);
}
int main()
{
	TipoPunto a,b;
	
	bool seguir = true;
	
	while(seguir){
		try{
			a.Leer();
			b.Leer();
			printf("Segmento: ");
			a.Escribir();
			printf(" ");
			b.Escribir();
			printf("Longitud: %f\n", a.Distancia(b));

		}catch (TipoPuntoError e){
			seguir = false;
			return 1;
		}
	}
	
	return 0;

}