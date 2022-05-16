/* Autor: Andriks Imanol Ruiz Martínez, Realizado: 16/02/2022 
Escuela: Universidad del Valle de Mexico Campus Villahermosa
Materia: Programación Estructurada
Ciclo: 01/2022

Este es un programa de condicionales en Lenguaje C de la materia de Programación Estructurada
Muestra el uso de:
  
    -Variables flotantes y enteras</li>
    -printf para mostrar mensajes y variables
    -scanf
    -El uso de include para las librerías
    -Libreria math.h
    -Condicionales
    -Espaciado \t y el salto de renglón \n
    -Comentarios para la documentación interna del programa
	*/
#include<stdio.h>
#include<math.h>
int main() {
	//Declaración
	int genero;
	float peso, muneca, cintura, cadera, antebrazo, B, GC, Porcentaje=0, A1, A2, A3, A4, A5;
	//Entrada de datos
	printf("Introduce 1 si es mujer y 2 si es hombre:\n ");
	scanf("%d", &genero);
	//Procedimiento
if (genero==1) { //Condicionales
	printf("\t \Introduce el Peso: \n");	
	scanf("%f", &peso);
	printf("\t \Introduce la medida de la muñeca: \n");	
	scanf("%f", &muneca);
	printf("\t \Introduce la medida de la cintura: \n");	
	scanf("%f", &cintura);
	printf("\t \Introduce la medida de la cadera: \n");	
	scanf("%f", &cadera);
	printf("\t \Introduce la medida del antebrazo: \n");	
	scanf("%f", &antebrazo);
	A1= (peso*0.732)+8.987;
	A2= muneca/3.140;
	A3= cintura*0.157;
	A4= cadera*0.249;
	A5= antebrazo*0.434;
	B= A1+A2-A3-A4-A5;
	GC= peso-B;
	Porcentaje= (GC*100)/peso;
	printf("\t \La cantidad de Grasa corporal en la mujer es: %10.2f\n", Porcentaje);	//Salida
}
else if (genero==2) {
	printf("\t \Introduce el Peso: \n");	
	scanf("%f", &peso);
	printf("\t \Introduce la medida de la muñeca: \n");	
	scanf("%f", &muneca);
	A1= (peso*1.082)+94.42;
	A2= muneca/4.15;
	B= A1-A2;
	GC= peso-B;
	Porcentaje= (GC*100)/peso;
	printf("\t \La cantidad de Grasa corporal del hombre es: %10.2f\n", Porcentaje);	//Salida
}
	return 0;
}
