/*
Pograma que Imprime una Serie de numeros y los suma al final
*/
#include <stdio.h>

int main() {
	int n;
	int i=1;
	int suma;
	
	printf("Ingresar el numero hasta el cual quiere imprimir:");
	scanf("%d",&n);
	
	while(i<=n){
		
		printf("\n el numero es : %d\n",i);
		suma=suma+i;
		i=i+1;
	
	}
	
	printf("\n la suma: %d\n",suma);
	return 0;
}


