/*
Progroma de numeros naturales y pares
*/
#include<stdio.h>

int Num1=1;
int Num2=1;
int M;

int main()
{
	printf("Ingresar algun numero\n");
	scanf("%d",& M);
		  while(Num1<=M)
	{
		if(Num1%2==0)
		{
		 while(Num2<=Num1)
		 {
			printf("\n%d", Num1);
			Num2=Num2+1;
		 }
		}
		else
			{
			
			printf("\n%d", Num1);
			
		}
		
		Num1=Num1+1;
		Num2=1;	
	}
			  
			  
			  
			  
			  
			  
			  
			  
			  
			  

}
