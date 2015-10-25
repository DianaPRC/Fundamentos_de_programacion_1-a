/*

Programa pasa saber si estas reprobado o aprobado
*/
#include<stdio.h> //Libreria en E/E

int main()
{
   float Calificacion;
   printf("Introducir  la Calificacion\n");
   scanf( "%f", &Calificacion);
   if ( Calificacion >= 7 )
      printf("Aprobado\n");
   else
      printf("Reprobado\n");
}
