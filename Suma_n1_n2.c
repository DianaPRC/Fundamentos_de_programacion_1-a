/*
Programa que sume N1 y n2
*/
#include<stdio.h>//Libreria de E/S
   int resultado;
   int N1;
   int N2;
	int main()
	{//inicio main
	    printf("Dame un número");
	    scanf("%d", &N1);
	    printf("Dame otro número");
	    scanf("%d", &N2);
		resultado=N1+N2;
		printf("El resultado es % d", resultado);
		return 0;
		
	}//fin main
