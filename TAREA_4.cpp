/* Autor: Oscar Vivaldi Partido Ramirez, realizado: 06/02/2022			
	tarea 1 programa que calculara el area de una SECTOR CIRCULAR  
	*/
#include <stdio.h>
#include<math.h>
#include<Cmath>


int main(){
	//declaracion de variables 
	float R, n, area ;

	//entrada de datos
	printf("ingrese el valor del radio  mayor (R):  ");
	scanf("%f", &R);
	printf("ingrese el valor de la medidda del angulo  (n):  ");
	scanf("%f", &n);
	
	//proceso 
	area=M_PI*(pow(R, 2)*n/360);
	
	//SALIDA
	printf("el area del sector circular   es: %f cm2",area);

return 0;
}

