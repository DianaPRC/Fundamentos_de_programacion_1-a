/*
Programa usando arreglo
*/
#include<stdio.h>

int main()
{
	int i,num;
	float calificacion,acum, promedio;
	int arreglo[10]
	
	printf("Introducir calificaciones.\n");
	scanf("%d", &num);
	
	for(i=0;i<=10;i++)
	{
		printf("Introducir la calificacion %d. \n", i);
		scanf("%f", &calificacion);
		
		acum += calificacion;
	}
	
	promedio = acum/num;
	
	printf(" El promedio es = %.1f", promedio);

}
	
