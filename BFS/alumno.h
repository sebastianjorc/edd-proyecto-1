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
# define tam 9
//---------------------------------------------------------------------------------------------------
typedef struct tipo_alumno{	char letra;	int prof,pos;}Alumno;
//---------------------------------------------------------------------------------------------------
void imprimir_alumno(Alumno alumno);
void inicializar_alumnos (Alumno alumnoS[tam]);
void inicializar_Q(Alumno cola[tam]);
Alumno nuevo_v(Alumno Q[tam]);
//---------------------------------------------------------------------------------------------------
void imprimir_alumno(Alumno alumno){
	printf("Letra: %c\t", alumno.letra);
	printf("Prof:%i\t", alumno.prof);
	printf("Pos:%i\n", alumno.pos);
}
//---------------------------------------------------------------------------------------------------
void inicializar_alumnos (Alumno alumnoS[tam]){
/*	for (int i=0; i<tam; i++){
		alumnoS[i]=(Alumno*)malloc(sizeof(Alumno));
	}
*/	(alumnoS[0].letra)='a'; (alumnoS[0].prof)=0;(alumnoS[0].pos)=0;
	(alumnoS[1].letra)='b'; (alumnoS[1].prof)=0;(alumnoS[1].pos)=1;
	(alumnoS[2].letra)='c'; (alumnoS[2].prof)=0;(alumnoS[2].pos)=2;
	(alumnoS[3].letra)='d'; (alumnoS[3].prof)=0;(alumnoS[3].pos)=3;
	(alumnoS[4].letra)='e'; (alumnoS[4].prof)=0;(alumnoS[4].pos)=4;
	(alumnoS[5].letra)='f'; (alumnoS[5].prof)=0;(alumnoS[5].pos)=5;
	(alumnoS[6].letra)='g'; (alumnoS[6].prof)=0;(alumnoS[6].pos)=6;
	(alumnoS[7].letra)='h'; (alumnoS[7].prof)=0;(alumnoS[7].pos)=7;
	(alumnoS[8].letra)='i'; (alumnoS[8].prof)=0;(alumnoS[8].pos)=8;
}
//---------------------------------------------------------------------------------------------------
void inicializar_Q(Alumno cola[tam]){
	for (int i=0; i<tam; i++){
		cola[i].letra='0';
		cola[i].prof=0;
		cola[i].pos=-1;
	//	imprimir_alumno(cola[i]);
	}
}
//---------------------------------------------------------------------------------------------------
Alumno nuevo_v(Alumno Q[tam]){
	Alumno v=(Q[0]);
	for (int i=0; i<(tam-1); i++){
		Q[i]=Q[(i+1)];
	}
	return (v);
}
//---------------------------------------------------------------------------------------------------

