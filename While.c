/*
Programa que pueda representar los numeros naturales
*/
#include<stdio.h>
int final;
int i;
int main()
{
	printf("DAME UN NUMERO\n");
	scanf("%d",&final);
	i= 1;
	while(i<=final)
	{
		printf("%d\n",i);
		i=i+1;
	}
}
