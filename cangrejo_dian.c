/*
Programa que diga en cuantos dias salio el cangrejo twister
*/
#include<stdio.h>

int mprofundo;
	int mdia; 
	int mnoche;
	int dia;
	int noche;
	int i;
	int main ()
{
	printf("Esta es la historia de un cangrejito llamado twister");
	printf("El cangrejito twister a caido a un hoyo\n");
	printf("Cuanto es la profundidad del hoyo:");
	scanf("%d",& mprofundo);
	
	if(mprofundo>0)
	{
		printf("Que distancia avanza el cangrejito twister en la dia:");
		scanf("%d" ,&mdia);
		printf("Que distancia regresa el cangrejito twister en el noche");
		scanf("%d" ,&mnoche);
		if(mdia>mnoche)
		{
			for(i=1;i<mprofundo;i++)
			{
				dia=mprofundo-mdia;
				noche=dia+mnoche;
				mprofundo=noche;
			}
			printf("Los dias que tarda el cangrejo twister son: %d\n",i);
		}
		
		else
		{
			printf("Debe ser mayor lo que avanza que lo que retrocede");
		}
		
		
	}
	else
	{
		printf("La profundidad esta mal");
	}
}

