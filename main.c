#ifndef stdio_h
#include <stdio.h>
#define stdio_h
#endif

#ifndef stdlib_h
#include <stdlib.h>
#define stdlib_h
#endif

#ifndef alumnos_h
#include "alumnos.h"
#define alumnos_h
#endif

void introducción (){
	printf("\nBienvenido a mi programa 'Proyecto 1 EDD'\n");
	printf("Mi programa mostrará la interacción entre compañeros de un mismo curso respecto a los diferentes grupos hechos dentro de la clase\n");
	printf("blablablablablabla.... veamos\n");
}

main(){
	introducción();
	Alumno AlumnoS[tam];
	inicializar_alumnos(AlumnoS[tam]);
	Curso curso=inicializar_curso(AlumnoS[tam])
	recorrer_grafo(AlumnoS[3]);	
}