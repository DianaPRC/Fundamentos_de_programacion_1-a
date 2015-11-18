/*
Programa de calificaciones
*/
#include<stdio.h>
int arreglo [10];
int moda  [10];
int i;
float prom;
int main()
{
	printf("Programa que realiza el promedio de calificaciones");
	for(i=0;i<10;i++)
	{
		printf("Calificacion a promediar: ");
		scanf("%d \n", &arreglo [i]);
		prom=prom+arreglo [i];
	}
	
	prom=prom/10;
	printf("El promedio es: %f", prom);
}
	
