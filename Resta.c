/*
Programa que pueda  restar  n1 y n2
*/
#include<stdio.h>//Librería de E/S
  int resultado;
  int N1;
  int N2;
  int SUMA;
  int RESTA;
  int MULTI;
  float DIVI;
  int main()
  {//Inicio main
  printf("Dame un numero");
  scanf("d%", &N1);
  printf("Dame otro numero");
  scanf("d%", &N2);
  printf("El resultado de la suma es %d\n", SUMA);
  SUMA=N1+N2;
  printf("El resultado de la resta es %d\n", RESTA);
  RESTA=N1-N2;
  printf("El resultado de la multiplicacion es %d\n", MULTI);
  MULTI=N1*N2;
  printf("El resultado de la division es %d\n", DIVI);
  DIVI=N1/N2;
  
 return 0;
 
  
  
  
  
  
  
  }//Fin main
