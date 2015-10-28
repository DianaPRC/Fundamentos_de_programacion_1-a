/*
Programa que sepa en la  etapa en la que se encuentra
*/
#include<stdio.h> //Libreria en E/S

int main()
{
	int Edad;
	printf("Introducir su edad expresada en años\n");
	scanf("%d", &Edad);
	if(Edad >=0 && Edad<=12)
	printf("Ustede es un niño\n");
	if(Edad >=13 && Edad<=18)
	printf("Usted es un adolescente\n");
	if(Edad >=19 && Edad<=29)
	printf("Usted es un joven\n");
	if(Edad >=30 && Edad <=59)
	printf("Usted es un adulto\n");
	if(Edad >=60)
	printf("Usted es un adulto mayor\n");
}
