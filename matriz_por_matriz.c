#include<stdio.h>
int i,j;
int matriz1[3][3];
int matriz2[3][3];
int matriz3[3][3];
int main()
{
	printf("Programa que ayuda a multiplicar dos matrices de 3x3\n");

	printf("Ingrese la matriz A: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&matriz1[i][j]);
		}
	}
	
	printf("Matriz A: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d\t",matriz1[i][j]);	
		}			
			printf("\n");
	}

	printf("Ingrese la matriz B: \n");
	for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
		{	
			scanf("%d",&matriz2[i][j]);
		}
	}
	printf("Matriz B: \n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d\t",matriz2[i][j]);	
		}			
			printf("\n");
	}

	for(i=0;i<3;i++)
	{
      for(j=0;j<3;j++)
	  {
          matriz3[i][j]=matriz1[i][j]*matriz2[i][j];
      }
	}

  printf("Las dos matrices multiplicadas son: \n");
	for(i=0;i<3;i++)
	{
      for(j=0;j<3;j++)
	  {
        printf("%d\t",matriz3[i][j]);
        }
        printf("\n");
	}
}
