//Programa 3 de punteros declaracion y uso de punteros 
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h>

int a[]={5,5,6,6,7,8,5,5,9,9};
int *ptr;

int main()
{
	int i;
	ptr=&a[0];//apuntamos nuestro puntero al primer elemento del arreglo
	printf("\n\n");
	for(i=0;i<10;i++)
	{
		printf("Calificaciones[%d]= %-4d",i,a[i]);// <-- A
		printf("ptr = %d\n",i,*(ptr+i));// <-- B
	}
}