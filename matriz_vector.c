#include<stdio.h>
int main()
{
	int matriz[3][3];
	int i, j;
	int vector[2];
	int a;
	
	printf("Ingrese los valores de su matriz:\n");
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d", &matriz[i][j]);
		}
	}
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("Ingrese el valor del vector:\n");
	
	for(a=0; a<3; a++)
	{
		
		scanf("%d", &vector[a]);
		
	}
	
	for(a=0; a<3; a++)
	{
		
		printf("%d ", vector[a]);
		
	}
}
