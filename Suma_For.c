/*
Programa de suma con for
*/

#include <stdio.h>
int main() {
	int n;
	int i;
	int suma;
	
	printf("Ingresar algun numero el cual quiere imprimir:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		
		
		
		printf("\n el numero es : %d\n",i);
		suma=suma+i;
	
		
		
	}
	
	printf("\n la suma: %d\n",suma);
	return 0;
}
