/*
Autor: Ricardo Serrano
Entrada: unidadCentena
Salida: unidadCentena
Proceso: calcular la centena próxima de un número

QA
Entrada	 Salida	y Resultado
22.5  	  .225   0   0   
300	   	  3.000 3 300     
-60   	  -0.6   0  0    
0       	0    0  0     
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/*
	Variable de entrada tipo entera: unidadCentena
	Variable de salida tipo entera: unidadCentena
	Variable tipo double para manejar decimales
	*/
	double redondeo;
	int unidadCentena;
	
	printf("Escribir el numero: ");
	/* Entrada de datos*/
	scanf ("%lf",&redondeo);	
	/*Proceso de datos*/
	redondeo = redondeo/100;
	printf("Escribir el numero: %lf ",redondeo);
	if(redondeo - (int)redondeo >= 0.5)
	{
		
		unidadCentena = (int)redondeo + (redondeo - (int)redondeo);
		unidadCentena +=1; 
		printf("Escribir el arriba: %d ",unidadCentena);
		
	}
	else
	{
		unidadCentena =(int)redondeo + (redondeo - (int)redondeo);
		
		printf("Escribir el abajo: %d",unidadCentena);
		
	}
	
	unidadCentena = unidadCentena*100;
	/*Salida de datos*/
	printf("El numero redondeado a la centesima es %d",unidadCentena);
	return 0;
}
