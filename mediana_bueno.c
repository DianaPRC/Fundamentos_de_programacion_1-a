/*
Programa para sacar la mediana de 10 numeros
*/
#include<stdio.h>

int main()
{
    int x;
    int i;
    int aux;
    int j;
    
    
    printf("¿De cuanto numeros sera el Arreglo?:\n");
    scanf("%i", &x);
    
    int a[x];
    
    for(i=0;i<x;i++)
    {
        printf("Da el %i numero:\n",i+1);
        scanf("%i", &a[i]);    
    }
    
    for(i=0;i<x-1;i++)
    {
        for(j=i;j<x;j++)
        {
            if(a[i]<a[j])
            {
                aux=a[i];
                a[i]=a[j];
                a[j]=aux;
            }
        }
    }
    
    printf("Los numeros ordenados son:\n\n");
    
    for (i=x-1;i>=0;i--)
    {
      printf("\n*%i\n",a[i]);
    }  
    
    if(x%2!=0)
    {
        printf("\nEL valor de la mediana es : %d", a[x/2]);
    }
    else
    {
        printf("\nEL valor 1 de la mediana es : %d\n",a[x/2]);
        printf("\nEL valor 2 de la mediana es : %d\n",a[(x/2)-1]);
    }
}

