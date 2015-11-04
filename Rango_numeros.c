/*
Programa para determinar el rango entre dos numeros
*/
#include<stdio.h>
int Num1;
int Num2;
int main()
{
	printf("Ingresar el primer numero\n");
	scanf("%d" , &Num1);
	
	printf("ingresar el segundo numero\n");
	scanf("%d" ,&Num2);
	
	if(Num1<=Num2)
	{
		while (Num1<=Num2)
		{
			printf("%d/n" , Num1);
			Num1=Num1+1;
		}
	}
	
	
		else (Num2<=Num1);
	
	
		while (Num2<=Num1)
		{
			printf("%d/n" , Num1);
			Num1=Num1-1;
		}
}

