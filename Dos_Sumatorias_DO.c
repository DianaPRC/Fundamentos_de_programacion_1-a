/*
Programa que hace sumas de vaiables_con "Do
*/
#include <stdio.h>

int main() 
{
	printf("Programa para hacer sumatorias de dos Variables\n");
	int n,n2,i=1,resultado;
	
	printf("Ingresar el primer numero:");
	scanf("%d",&n);
	printf("Ingresar el segundo numero:");
	scanf("%d",&n2);
	
	do{
		
		resultado=resultado+n2;
		i=i+1;
		
	}while(i<=n);
	
	printf("El resultado es: %d",resultado);

	return 0;
}
