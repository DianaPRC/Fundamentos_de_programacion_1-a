/*
Programa  que resuelva las 4 operaciones basicas
*/
#include<stdio.h>//Librería de E/S
  int N1;
  int N2;
  int Suma;
  int Resta;
  int Multi;
  float Divi;
  int main()
  {//Inicio main
  printf("Dame un numero");
  scanf("d%", &N1);
  printf("Dame otro numero");
  scanf("d%", &N2);
  Suma=N1+N2;
  Resta=N1-N2;
  Multi=N1*N2;
  Divi=N1/N2;
  Divi=(float)N1/N2;
  printf("El resultado de la suma es: %d\n", Suma);
  printf("El resultado de la resta es: %d\n", Resta);
  printf("El resultado de la multiplicacion es: %d\n", Multi);
  printf("El resultado de la division es: %f\n", Divi);
  
  return 0;
  
  
  
  }//Fin main
  

