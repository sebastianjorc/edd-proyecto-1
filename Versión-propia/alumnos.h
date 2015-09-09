#ifndef stdio_h
#include <stdio.h>
#define stdio_h
#endif

#ifndef stdlib_h
#include <stdlib.h>
#define stdlib_h
#endif

# define tam 8

typedef struct tipo_curso{	int interaccion[tam][tam];  Alumnos alumnos[tam]}Curso;
//Aquí sirve para la interacción, osea estatico.
typedef struct tipo_alumno{	char letra;	int prof, estado,pos;}Alumno;

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
void marcar_grices (Curso curso[tam][tam], Alumnos alumnos[tam], Alumno alumno, int *prof){
	alumno->estado=2; //Marca de negro al nodo que le buscaremos los adiacentes.
	for (int i=0; i<tam; i++){//Recorre la columna correspondiente a las conecciones del nodo.
		if ( curso[(alumno->pos)][i]==1 ){//Si encuentra una conección hace lo siguiente:
			alumnos[i]->estado=1; //Marca los nodos conectados en 1 = griss
			alumnos[i]->prof=(*prof)+1; //Guarda distancia de la raiz.
		}
	}
}
Alumno quedan_marcados(Alumnos alumnos[tam],int prof, int partir){
	for (int i=0; i<tam; i++){
		if ( partir == (Alumnos[i]->prof) && (Alumnos[i]->estado)!=2){
			return 0;
		}
	}
	return 1;
}
Alumno nuevo_nodo_actual(Curso curso[tam][tam], Alumnos alumnos[tam], Alumno alumno, int *prof, int *partir){
	if (quedan_marcados(alumnos,prof,&(*partir))!=NULL){
		return (quedan_marcados);
	}
	else {
		(*partir)++;
		if (quedan_marcados(alumnos,prof,&(*partir))!=NULL){
			return (quedan_marcados);
		}
		else {
			return(NULL);		
		}
	}
}
void recorrer_grafoBFS(Alumno alumno, Alumnos alumnos[tam], Curso curso[tam][tam], int *prof, int *partir){
	//Aquí introducir todo el algoritmo de recorrido 
	//o bien, crear funciones para hacerlo por partes
	int acabado=0;
	while (!acabado){
		int partir=0;
		marcar_grices(curso,alumnos,alumno,&prof);//también marca de negro el nodo principal.
		if (nuevo_nodo_actual(curso,alumnos,alumno,&prof,&partir)!=NULL){
			(*prof)++;
			//recorrer_grafosBFS()
			
		}
		else{
			acabado=1;
		}
	}	
}
void recorrer_grafoDFS(Alumno alumno){
	//Aquí introducir todo el algoritmo de recorrido 
	//o bien, crear funciones para hacerlo por partes	
}
