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
typedef struct tipo_alumno{	char letra;	int prof,pos;}Alumno;
//typedef struct tipo_arreglo{	Alumno alumnos[tam];	}
typedef struct tipo_curso{	int interaccion[tam][tam];  Alumno alumnos[tam];}Curso;
//Aquí sirve para la interacción, osea estatico.
//---------------------------------------------------------------------------------------------------
//	PROTOTIPOS.
Alumno *inicializar_alumnos ();
Curso *inicializar_curso ();
//---------------------------------------------------------------------------------------------------
Alumno *inicializar_alumnos (){
	Alumno *alumnoS[tam];
	(alumnoS[0]->letra)='a'; (alumnoS[0]->prof)=0;(alumnoS[0]->pos)=0;
	(alumnoS[1]->letra)='b'; (alumnoS[1]->prof)=0;(alumnoS[1]->pos)=1;
	(alumnoS[2]->letra)='c'; (alumnoS[2]->prof)=0;(alumnoS[2]->pos)=2;
	(alumnoS[3]->letra)='d'; (alumnoS[3]->prof)=0;(alumnoS[3]->pos)=3;
	(alumnoS[4]->letra)='e'; (alumnoS[4]->prof)=0;(alumnoS[4]->pos)=4;
	(alumnoS[5]->letra)='f'; (alumnoS[5]->prof)=0;(alumnoS[5]->pos)=5;
	(alumnoS[6]->letra)='g'; (alumnoS[6]->prof)=0;(alumnoS[6]->pos)=6;
	(alumnoS[7]->letra)='h'; (alumnoS[7]->prof)=0;(alumnoS[7]->pos)=7;
	(alumnoS[8]->letra)='i'; (alumnoS[8]->prof)=0;(alumnoS[8]->pos)=8;
	return alumnoS[tam];
}
//---------------------------------------------------------------------------------------------------
Curso *inicializar_curso (){
	Alumno *AlumnoS[tam];
	AlumnoS[tam]=inicializar_alumnos();
	Curso *curso;;
//				 0.1.2.3.4.5.6.7.8
	int matriz[tam][tam]={	{0,1,1,1,1,0,0,0,0},/*0*/
		     		{1,0,1,0,0,0,0,0,0},/*1*/
 		    		{1,1,0,0,0,0,0,0,0},/*2*/
		 		{0,0,0,0,1,1,0,0,0},/*3*/
				{0,0,1,1,0,1,0,0,0},/*4*/
				{0,0,0,1,1,0,0,0,0},/*5*/
				{0,0,0,0,0,0,0,1,1},/*6*/
				{0,0,0,0,0,0,1,0,1},/*7*/
				{0,0,0,0,0,0,1,1,0}/*8*/
				};

	&(curso->interaccion)=matriz;
	&(curso->alumnos)=AlumnoS;
	return curso;
}
//---------------------------------------------------------------------------------------------------
/*Alumnos *inicializar_Q(){
	Alumno *cola[tam];
	for (int i=0; i<tam; i++){
		cola[i]=NULL;
	}
	return(cola);
}
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
Alumno *nuevo_v(Alumno Q[tam]){
	Alumno *aux,v=Q[0];
	for (int i=0; i<(tam-1); i++){
		Q[i]=Q[(i+1)];
	}
	return v;
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
