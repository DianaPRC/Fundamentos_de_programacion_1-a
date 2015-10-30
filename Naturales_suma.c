/*
Programa para introducir un numero y dar la suma de ellos
*/
#include<stdio.h>

int final;
int i;
int resultado;

int main()
	
{
	printf("Programa para introducir un numero y dar la suma de ellos\n");
	printf("Intun introducir nummero:");
	scanf("%d",&final);
	i=1;
	
	while(i<=final)
	{
		printf("%d\n", i);
		resultado=resultado+i;
		i=i+1;
	}
	
	printf("%d", resultado);
}

