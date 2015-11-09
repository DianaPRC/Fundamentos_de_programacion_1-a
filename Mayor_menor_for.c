#include <stdio.h>


int main() {
	
	int n1,n2;
	
	printf("Ingresar el primer numero:");
	scanf("%d",&n1);
	printf("Ingresar el segundo numero:");
	scanf("%d",&n2);
	
	if(n1<n2)
	{
		
		for(;n1<=n2;n1++)
		{
			
			printf("\nes :%d\n",n1);
			
			
		}
		
	}
	else
	{
		
		for(;n1>=n2;n1--)
		{
			
			printf("\nes :%d\n",n1);
			
		}		
		
	}
	
	return 0;
}
