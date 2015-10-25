/*
Programa que puedea dar el mes por el numero
*/
#include<stdio.h>//Libreria de E/S
     int Numero;
	 int main()
     {//inicio main
     	printf("Introducur el numero del mes\n");
     	scanf("%d", &Numero);
     	if(Numero=1)
     	printf("Enero\n");
    	 if(Numero=2)
     	printf("Febrero\n");
     	if(Numero=3)
     	printf("Marzo\n");
     	if(Numero=4)
     	printf("Abril\n");
     	if(Numero=5)
     	printf("Mayo\n");
     	if(Numero=6)
     	printf("Junio\n");
     	if(Numero=7)
     	printf("Julio\n");
     	if(Numero=8)
     	printf("Agosto\n");
     	if(Numero=9)
     	printf("Septiembre\n");
     	if(Numero=10)
     	printf("Octubre\n");
     	if(Numero=11)
     	printf("Noviembre\n");
     	if(Numero=12)
     	printf("Diciembre\n");
     	if(Numero>=12)
     	printf("No es un mes\n");
     	return 0;
     }//fin main
