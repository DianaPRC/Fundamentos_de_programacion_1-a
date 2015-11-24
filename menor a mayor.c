/*
programa que ordene de menor a mayor
*/
int main()

{	
	int i,a,g,tam;
	int arreglo[10];

	for(i=0; i<10; i++)
{
	printf("Ingresar la serie de numeros %d:", i++);
	scanf("%d", & arreglo[i]);

	for(i=0;i<tam;i++)
	{
		for(a=i+1;i<tam;a++)
		{
			if(arreglo[i]>arreglo[a])
			{
				g=arreglo [i];
				arreglo [i]=arreglo[a];
				arreglo [a]=g;
			}
		}
	}
	
}	printf("Los numeros quedan asi de menor a mayor %d\n");
}
