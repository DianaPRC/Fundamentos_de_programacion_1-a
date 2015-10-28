/*
Programa que pueda decir el numero mayor y el numero menor
*/
#include<stdio.h>

int main()
{
	printf(" Introducir los  Numeros \n");
	int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10, mayor, menor;
	printf ("n1 =");
	scanf ("%d",&n1);
	printf ("n2 =");
	scanf ("%d",&n2);
	printf ("n3 =");
	scanf ("%d",&n3);
	printf ("n4 =");
	scanf ("%d",&n4);
	printf ("n5 =");
	scanf ("%d",&n5);
	printf ("n6 =");
	scanf ("%d",&n6);
	printf ("n7 =");
	scanf ("%d",&n7);
	printf ("n8 =");
	scanf ("%d",&n8);
	printf ("n9 =");
	scanf ("%d",&n9);
	printf ("n10 =");
	scanf ("%d",&n10);
	
	
	if ((n1>=n2) && (n1>=n3) && (n1>=n4) && (n1>=n5) && (n1>=n6) && (n1>=n7) && (n1>=n8) && (n1>=n9) && (n1>=n10))
	{
		mayor =n1;
	}
	
	
	if ((n2>=n1) && (n2>=n3) && (n2>=n4) && (n2>=n5) && (n2>=n6) && (n2>=n7) && (n2>=n8) && (n2>=n9) && (n2>=n10))
	{
		mayor =n2;
	}
	
	
	if ((n3>=n2) && (n3>=n1) && (n3>=n4) && (n3>=n5) && (n3>=n6) && (n3>=n7) && (n3>=n8) && (n3>=n9) && (n3>=n10))
	{
		mayor =n3;	
	}
	
	
	if ((n4>=n2) && (n4>=n3) && (n4>=n1) && (n4>=n5) && (n4>=n6) && (n4>=n7) && (n4>=n8) && (n4>=n9) && (n3>=n10))
	{
		mayor =n4;
	}
	
	
	if ((n5>=n2) && (n5>=n3) && (n5>=n4) && (n5>=n1) && (n5>=n6) && (n5>=n7) && (n5>=n8) && (n5>=n9) && (n5>=n10))
	{
		mayor =n5;
	}
	
	
	if ((n6>=n2) && (n6>=n3) && (n6>=n4) && (n6>=n5) && (n6>=n1) && (n6>=n7) && (n6>=n8) && (n6>=n9) && (n6>=n10))
	{
		mayor =n6;
	}
	
	
	if ((n7>=n2) && (n7>=n3) && (n7>=n4) && (n7>=n5) && (n7>=n6) && (n7>=n1) && (n7>=n8) && (n7>=n9) && (n7>=n10))
	{
		mayor =n7;
	}

	
	if ((n8>=n2) && (n8>=n3) && (n8>=n4) && (n8>=n5) && (n8>=n6) && (n8>=n7) && (n8>=n1) && (n8>=n9) && (n8>=n10))
	{
		mayor =n8;
	}
	
	
	if ((n9>=n2) && (n9>=n3) && (n9>=n4) && (n9>=n5) && (n9>=n6) && (n9>=n7) && (n9>=n8) && (n9>=n1) && (n9>=n10))
	{
		mayor =n9;
	}
	
	
	if ((n10>=n2) && (n10>=n3) && (n10>=n4) && (n10>=n5) && (n10>=n6) && (n10>=n7) && (n10>=n8) && (n10>=n9) && (n10>=n1))
	{
		mayor =n10;
	}
	
	
	
	
	if ((n1<=n2) && (n1<=n3) && (n1<=n4) && (n1<=n5) && (n1<=n6) && (n1<=n7) && (n1<=n8) && (n1<=n9) && (n1<=n10))
	{
		menor =n1;
	}
	
	
	if ((n2<=n1) && (n2<=n3) && (n2<=n4) && (n2<=n5) && (n2<=n6) && (n2<=n7) && (n2<=n8) && (n2<=n9) && (n2<=n10))
	{
		menor =n2;
	}
	
	
	if ((n3<=n2) && (n3<=n1) && (n3<=n4) && (n3<=n5) && (n3<=n6) && (n3<=n7) && (n3<=n8) && (n3<=n9) && (n3<=n10))
	{
		menor =n3;
	}
	
	
	if ((n4<=n2) && (n4<=n3) && (n4<=n1) && (n4<=n5) && (n4<=n6) && (n4<=n7) && (n4<=n8) && (n4<=n9) && (n3<=n10))
	{
		menor =n4;
	}
	
	
	if ((n5<=n2) && (n5<=n3) && (n5<=n4) && (n5>=n1) && (n5<=n6) && (n5<=n7) && (n5<=n8) && (n5<=n9) && (n5<=n10))
	{
		menor=n5;
	}
	
	
	if ((n6<=n2) && (n6<=n3) && (n6<=n4) && (n6<=n5) && (n6<=n1) && (n6<=n7) && (n6<=n8) && (n6<=n9) && (n6<=n10))
	{
		menor =n6;
	}
	
	
	if ((n7<=n2) && (n7<=n3) && (n7<=n4) && (n7<=n5) && (n7<=n6) && (n7<=n1) && (n7<=n8) && (n7<=n9) && (n7<=n10))
	{
		menor =n7;
	}
	
	
	if ((n8<=n2) && (n8<=n3) && (n8<=n4) && (n8<=n5) && (n8<=n6) && (n8<=n7) && (n8<=n1) && (n8<=n9) && (n8<=n10))
	{
		menor =n8;
	}
	
	
	if ((n9<=n2) && (n9<=n3) && (n9<=n4) && (n9<=n5) && (n9<=n6) && (n9<=n7) && (n9<=n8) && (n9<=n1) && (n9<=n10))
	{
		menor=n9;
	}
	
	
	if ((n10<=n2) && (n10<=n3) && (n10<=n4) && (n10<=n5) && (n10<=n6) && (n10<=n7) && (n10<=n8) && (n10<=n9) && (n10<=n1))
	{
		menor =n10;
	}
	
	printf("El número más grande es: %d", mayor);
	printf("El número más pequeño es: %d", menor);
	
}
	

	
