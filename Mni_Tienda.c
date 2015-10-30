/*
Programa para introducir un numero y dar la suma de ellos
*/

#include <stdio.h>
int menu;
int producto;
int piezas;
int resultado;
int main ()
{
	printf ("Que opcion Prefieres, elige una\n");
	printf ("De acuerdo a tu respuesta:\n");
	printf ("1= Productos\n");
	printf ("2= Ver ganancias\n");
	scanf ("%d",&menu);
	switch (menu)
	{
		case 1:
			printf ("Productos\n");
			printf ("Productos a vender:\n");
			printf ("Ingrese el numero de Productos que quiera comprar\n");
			printf ("1.- $20.00-----Bolsa de papas\n");
			printf ("2.- $10.00-----Emperador\n");
			printf ("3.- $38.00 -----Caja de cigarros\n");
			printf ("4.- $27.00 -----Paleta Magnum\n");
			printf ("5.- $12.00-----Coca Cola\n");
			printf ("\nIngrese el numero de Producto\n");
			scanf ("%d",&producto);
			
			if(producto==1){
				printf ("Inrese la cantidad que va adquirir\n");
				scanf ("%d",&piezas);
				resultado =10*piezas;
				printf ("El total de %d Bolsa de papas que llevara es igual a %d\n",piezas,resultado);
			}
			if(producto==2){
				printf ("Inrese la cantidad que va adquirir\n");
				scanf ("%d",&piezas);
				resultado =3*piezas;
				printf ("El total de %d Emperador que llevara es igual a %d\n",piezas,resultado);
			}
			if(producto==3){
				printf ("Inrese la cantidad que va adquirir\n");
				scanf ("%d",&piezas);
				resultado =20*piezas;
				printf ("El total de %d Caja de cigarros que llevara es igual a %d\n",piezas,resultado);
			}
			if(producto==4){
				printf ("Inrese la cantidad que va adquirir\n");
				scanf ("%d",&piezas);
				resultado =7*piezas;
				printf ("El total de %d Paleta Magnum que llevara es igual a %d\n",piezas,resultado);
			}
			if(producto==5){
				printf ("Inrese la cantidad que va adquirir\n");
				scanf ("%d",&piezas);
				resultado =8*piezas;
				printf ("El total de %d Coca Cola que llevara es igual a %d\n",piezas,resultado);
			}
			else 
			printf ("E-R-R-O-R. No contamos con esos productos\n");
			break;
			
			case 2:
				printf ("\nEl cierre todal de la venta del dia de HOY es %d pesos\n",resultado);
				break;
				
				default:
				printf ("\n\E-R-R-O-Rn");
	}
	return main();
}


