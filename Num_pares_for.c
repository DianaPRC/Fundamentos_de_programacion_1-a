#include<stdio.h>

int main()
{
	
	int n1;
	int i;
	int n;
	
	
	printf("Ingresar numero:");
	scanf("%d",&n1);
	for(i=1;i<=n1;i++)
	{
		
		if(i%2==0)
		{
			
			printf("es:");
			for(n=1;n<=i;n++)
			{
				
				printf("%d",i);
				
				
				
			}         
			
		}
		else
		{        
			printf("\n");
			printf("es:%d",i);            
			printf("\n");
		}
	}
	
	return 0;
}
