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
# define tam 8
typedef struct tipo_curso{	int interaccion[tam][tam];  Alumnos alumnos[tam]}Curso;
//Aquí sirve para la interacción, osea estatico.
typedef struct tipo_alumno{	char letra;	int prof, estado,pos;}Alumno;
//---------------------------------------------------------------------------------------------------
void inicializar_alumnos (Alumno Alumnos[tam]){
	(Alumnos[0]->letra)='a'; (Alumnos[0]->prof)=(Alumnos[0]->estado)=NULL;(Alumnos[0]->pos)=0;
	(Alumnos[1]->letra)='b'; (Alumnos[1]->prof)=(Alumnos[1]->estado)=NULL;(Alumnos[1]->pos)=1;
	(Alumnos[2]->letra)='c'; (Alumnos[2]->prof)=(Alumnos[2]->estado)=NULL;(Alumnos[2]->pos)=2;
	(Alumnos[3]->letra)='d'; (Alumnos[3]->prof)=(Alumnos[3]->estado)=NULL;(Alumnos[3]->pos)=3;
	(Alumnos[4]->letra)='e'; (Alumnos[4]->prof)=(Alumnos[4]->estado)=NULL;(Alumnos[4]->pos)=4;
	(Alumnos[5]->letra)='f'; (Alumnos[5]->prof)=(Alumnos[5]->estado)=NULL;(Alumnos[5]->pos)=5;
	(Alumnos[6]->letra)='g'; (Alumnos[6]->prof)=(Alumnos[6]->estado)=NULL;(Alumnos[6]->pos)=6;
	(Alumnos[7]->letra)='h'; (Alumnos[7]->prof)=(Alumnos[7]->estado)=NULL;(Alumnos[7]->pos)=7;
	(Alumnos[8]->letra)='i'; (Alumnos[8]->prof)=(Alumnos[8]->estado)=NULL;(Alumnos[8]->pos)=8;
}
//---------------------------------------------------------------------------------------------------
Curso inicializar_curso (){
	Alumno AlumnoS[tam]=inicializar_alumnos();
//				0.1.2.3.4.5.6.7.8
	Curso curso[tam][tam]={	0,1,1,1,1,0,0,0,0,/*0*/
		     		1,0,1,0,0,0,0,0,0,/*1*/
		     		1,1,0,0,0,0,0,0,0,/*2*/
		     		0,0,0,0,1,1,0,0,0,/*3*/
		     		0,0,1,1,0,1,0,0,0,/*4*/
				0,0,0,1,1,0,0,0,0,/*5*/
				0,0,0,0,0,0,0,1,1,/*6*/
				0,0,0,0,0,0,1,0,1,/*7*/
				0,0,0,0,0,0,1,1,0;}/*8*/
}
//---------------------------------------------------------------------------------------------------
Alumnos inicializar_Q(){
	Alumno cola[tam];
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
Alumno nuevo_v(Alumno Q[tam]){
	Alumno aux,v=Q[0];
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
	Alumno Q[tam]==inicializar_Q();
	Q[0]=alumno;
	while (!Q_vacio(Q)){
		nuevo_v(&Q);
		if (existen_adyacentes(nuevo_v, curso)){
			marco_adyacentes();
		}		
	}
}
//---------------------------------------------------------------------------------------------------
