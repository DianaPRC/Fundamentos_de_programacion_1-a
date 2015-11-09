/*
programa 
*/

#include <stdio.h>

int main() 
{
	
	int n,n2,resultado;
	int i;
	
	printf("Ingresar el primer numero:");
	scanf("%d",&n);
	printf("Ingresar el segundo numero:");
	scanf("%d",&n2);
	
	for(i=1;i<=n;i++)
	{
		
		resultado=resultado+n2;
		
		
	}
	
	printf("el resultado es: %d",resultado);
	
	return 0;
}
