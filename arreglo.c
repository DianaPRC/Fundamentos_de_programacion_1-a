/*
Programa usando arreglo
*/
#include<stdio.h>

int arreglo[10];
int i;
int main()
{

	for(i=0;i<10;i++)
	{
		arreglo[i]=i+1;
		arreglo[i]=arreglo[i]*10;
		printf("%d\n", arreglo[i]);
	}

 
	
}
