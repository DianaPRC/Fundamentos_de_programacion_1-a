/*
programa para sacar el numero mayor de las calificaciones.
*/
#include<stdio.h>
 
int main ()
{
 
  int i=0,j = 0, arreglo[10],dato;
  int arreglo2 [10];
  int aux, aux2, pos,x;
 
  for (i=0; i<10; i++)
  {
     printf ("\nIngresa el valor: %d", i++);
     scanf("%d",&arreglo [i]);
     
     arreglo[i]=dato;
     aux = aux + arreglo[i];  
	
     aux2 = arreglo[i];
     pos = i;
     for(j=i;j<10;j++) {
     if(arreglo[j]==aux2) arreglo2[j]++;

 }

		 
	for(i=10;i>0 && x==0;j--)
	{

	for(j=0;j<i;j++)
		 {
			if(arreglo[j]>arreglo[j+1]) 
				{
				aux2 = arreglo[j];
				arreglo[j] = arreglo[j+1];
				arreglo[j+1]=aux2;

	   			}
		}
	}
	
	
}
	printf("la suma del arreglo es: %d \n", aux);
	printf("\nEL valor de la mediana es : %d",arreglo[10/2]);

  return 0;

	
}

