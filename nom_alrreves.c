
#include <stdio.h>

int main()
{
	char frase[10];
	char aux ;
	int contador;

	printf("Introduce la frase: ");

	contador= 0 ;
	while ( aux != '\n')
	{
		scanf("%c" , &aux ) ;
		frase[contador] = aux ;
		contador++;


	}

	while(contador>=0)
	{
		printf("%c", frase[contador-1]);
		contador--;
	}
	printf("\n");
	system("pause");
	return 0;
}
