/*
Programa para convertir megabytes a unidades de medida informatica
*/
#include<stdio.h>//Libreria de E/S
float Megabyte;
float Bit;
float Byte;
float Giga;
float TB;
int main()
{//Inicio main
          printf("Ingrese cuantos Megabyte quiere convertir \n");
          scanf("%d" ,&Megabyte);
          Bit=Megabyte*8388608;
          Byte=Megabyte*1048576;
          Giga=Megabyte/1024;
          TB=Megabyte/1024;
          printf("El resultado de MG a Bits es de: %d", Bit);
          printf("El resultado de MG a Bytes es de: %d", Byte);
          printf("El resultado de MG a Gigabytes es de: %d", Giga);
          printf("El resultado de MG a Terabytes es de: %d", TB);
          
}//Fin main
          
          
