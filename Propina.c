/*
Programa que otorgue el porcentaje
*/
#include<stdio.h>//Libreria de E/S
   float Consumo;
   float Total;
   float Propina;
   float Totalper;
   float Numper;
   int main()
   {//Inicio main
   printf("Dame el total del consumo/n");
   scanf("%f", &Consumo);
   Propina=Consumo*0.10;
   Total=Consumo+Propina;
   ("El total a pagar es: %f/n", Total);
   ("La propina es: %f/n", Propina);
   ("Cuato pondra cada persona/n");
   scanf("%f", &Numper);
   Totalper=Total/Numper;
   printf("Cada persona debera pagar: %f/n", Totalper);
   return 0;
   }//Fin main

