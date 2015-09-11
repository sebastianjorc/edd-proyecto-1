	//---------------------------------------------------------------------------------------------------
#ifndef stdio_h
#include <stdio.h>
#define stdio_h
#endif
//---------------------------------------------------------------------------------------------------
#ifndef stdlib_h
#include <stdlib.h>
#define stdlib_h
#endif
//---------------------------------------------------------------------------------------------------
#ifndef alumnos_h
#include "alumno.h"
#define alumnos_h
#endif
//---------------------------------------------------------------------------------------------------
# define tam 9
//---------------------------------------------------------------------------------------------------
typedef struct tipo_curso{	int interaccion [tam][tam];  Alumno alumnos[tam];}Curso;
//Aquí sirve para la interacción, osea estatico.
//---------------------------------------------------------------------------------------------------
//	PROTOTIPOS.
void imprimir_matriz(int matriz[tam][tam]);
void imprimir_curso(Curso curso);
Curso inicializar_curso ();
//---------------------------------------------------------------------------------------------------
void imprimir_matriz(int matriz[tam][tam]){
	for (int i=0; i<tam; i++){
		for (int j=0; j<tam; j++){
			printf("%i ", matriz[i][j]);
		}	printf("\n");
	}
	
}
//---------------------------------------------------------------------------------------------------
void imprimir_curso(Curso curso){
	imprimir_matriz(curso.interaccion);
	for (int i=0; i<tam; i++){
		imprimir_alumno(curso.alumnos[i]);	
	}
}
//---------------------------------------------------------------------------------------------------
Curso inicializar_curso (){
	Curso curso;
	inicializar_alumnos(curso.alumnos);
//				 0.1.2.3.4.5.6.7.8
	int matriz[tam][tam]={	{0,1,1,1,1,0,0,0,0},/*0*/
		     		{1,0,1,0,0,0,0,0,0},/*1*/
 		    		{1,1,0,0,0,0,0,0,0},/*2*/
		 		{0,0,0,0,1,1,0,0,0},/*3*/
				{0,0,1,1,0,1,0,0,0},/*4*/
				{0,0,0,1,1,0,0,0,0},/*5*/
				{0,0,0,0,0,0,0,1,1},/*6*/
				{0,0,0,0,0,0,1,0,1},/*7*/
				{0,0,0,0,0,0,1,1,0} /*8*/
				};

	for (int i=0; i<tam; i++){
		for (int j=0; j<tam; j++){
			curso.interaccion[i][j]=matriz[i][j];
		}
	}
	imprimir_curso(curso);	
	printf("hola4\n");
	return curso;
}
//---------------------------------------------------------------------------------------------------
int Q_vacio(Alumno Q[tam]){
	for (int i=0; i<tam; i++){
/*		if (Q[i]!=NULL){
			return 1;
		}
*/	}
	return 0;
}
//---------------------------------------------------------------------------------------------------
int existen_adyacentes(Alumno v, Curso curso){
	for (int i=0; i<tam; i++){
		if (curso.interaccion[(v.pos)][i]==1){
			return 1;
		}
	}
	return 0;
}
//---------------------------------------------------------------------------------------------------
void marco_adyacentes(Curso curso, Alumno Q[tam], Alumno v){
	int pos=0;
	for (int i=0; i<tam; i++){
		if (curso.interaccion[(v.pos)][i]==1){
			Q[v.pos]=curso.alumnos[i];
			pos++;
		}
	}	
}

//---------------------------------------------------------------------------------------------------
void metodo_BFS (Curso curso, Alumno alumno){
	printf("hola2");
	Alumno Q[tam];
	inicializar_Q(Q);
	printf("hola3");
	Q[0]=alumno;
/*	while (!Q_vacio(Q)){
		nuevo_v(&Q);
		if (existen_adyacentes(nuevo_v, curso)){
			marco_adyacentes();
		}		
	}*/
}
//---------------------------------------------------------------------------------------------------
