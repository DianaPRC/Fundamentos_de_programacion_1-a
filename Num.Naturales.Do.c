/*
Programa de numeros naturales y pares
*/
#include<stdio.h>
int j,i;
int final;
 int main ()
 {
 	printf ("Programa que haga un ciclo");
 	printf ("Dame un numero");
 	scanf("%d" , &final);
	 i=1;
	 while (i<=final)
	 {
	 	j=1;
	 	do
	 	{
	 		printf("%d",i);
	 		j=j+1;
	 	}while ((j<=i) && (i%2==0));
	 	printf("\n");
	 	i ++;
	 }
 }
