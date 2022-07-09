//Programa 1 de punteros declaracion y uso de punteros 
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h>

int j,k;
int *ptr;

int main()
{
	j=1;
	k=2;
	ptr=&k;//apunta al valor entero que tiene k
	printf("El valor entero al que apunta ptr es: %d \n",*ptr);
	printf("\n");
	printf("j tiene el valor de: %d y esta alojado en %p\n",j,&j);
	printf("k tiene el valor de: %d y esta alojado en %p\n",k,&k);
	printf("ptr tiene el valor de: %p y esta alojado en %p\n",ptr,&ptr);
	printf("El valor del entero al que apunta ptr es: %d\n",*ptr);
}