#include <stdio.h>
	 int main()
	 {
	 	int Kilo, Ropa;
		
		printf("¿Cuantos Kilos Quieres Lavar?\n");
		   scanf("%d",&Kilo);
		  // if (Kilo<=20)
	//	{
		printf("¿Que tipo de ropa es?\n");
		scanf("%d",&Ropa );
		
		//  0 <= 10 // minimo
		//  11 <= 15 // medio 
		//  16 <=  20 // maximo 
		//  > 20 // no se puede lavar 
		
		   if (Kilo <= 10)
		     	printf (" \n La lavadora esta al minimo de agua \n" );
			 if (Kilo>=11 && Kilo<=15)
			printf(" \n La lavdora esta a la mitad de agua \n" );
		     if (Kilo>=16 && Kilo<=20)
		    printf(" \n La lavadora esta al maximo de agua \n") ;
		   // }
		     if (Kilo >  20)
		     {
		     	printf (" No se puede lavar\n");
		     	return 0;
			 }
			 
		  //1) Delicada- 5 minutos 
		  //2) Normal - 10 minutos 
		  //3) Sucia - 20 minuto
	
		   if (Ropa>3)
		
		printf (" Equivocado \n");
		   
		 if (Ropa==1)
	 		printf (" Su ropa se lavara por el tiempo de 5 minutos \n ");
		 if (Ropa==2)
			printf (" Su ropa se lavara por el tiempo de 10 minutos \n");
		 if  (Ropa==3)
			printf  (" Su ropa se lavara por el tiempo de 20 minutos \n ");
		
		 
		
	
		    
		   // system("pause");
	 	
		return 0;
	}
