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
Curso inicializar_curso ();
void inicializar_matriz(){
}
//---------------------------------------------------------------------------------------------------
Curso inicializar_curso (){
	Alumno alumnoS[tam];
	inicializar_alumnos(alumnoS);
	printf("hola1\n");
	Curso curso;
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
	printf("hola2\n");
//	(curso.interaccion[tam][tam])=(matriz);//		HACER	 VALOR	 POR	 VALOR
	printf("hola3\n");
	for (int h=1; h<tam; h++){
		curso.alumnos[h]=alumnoS[h];
	}
	//(curso.alumnos)=(alumnoS);
	printf("hola4\n");
	return curso;
}/*
//---------------------------------------------------------------------------------------------------
int Q_vacio(Alumno Q[tam]){
	for (int i=0; i<tam; i++){
		if (Q[i]!=NULL){
			return 1;
		}
	}
	return 0;
}
//---------------------------------------------------------------------------------------------------
int existen_adyacentes(Alumno v, Curso curso){
	for (int i=0; i<tam; i++){
		if (curso->interacciones[(v->pos)][i]==1){
			return 1;
		}
	}
	return 0;
}
//---------------------------------------------------------------------------------------------------
void marco_adyacentes(Curso curso, Alumno Q[tam], Alumno v){
	int pos=0;
	for (int i=0; i<tam; i++){
		if (curso->interacciones[(v->pos)][i]==1){
			Q[pos]=alumnos[i];
			pos++;
		}
	}	
}

//---------------------------------------------------------------------------------------------------
void metodo_BFS (Curso curso, Alumno alumno){
	Alumno *Q[tam]==inicializar_Q();
	Q[0]=alumno;
	while (!Q_vacio(Q)){
		nuevo_v(&Q);
		if (existen_adyacentes(nuevo_v, curso)){
			marco_adyacentes();
		}		
	}
}
//---------------------------------------------------------------------------------------------------
*/
