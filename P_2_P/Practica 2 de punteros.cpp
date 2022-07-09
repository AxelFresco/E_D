//Programa 2 de punteros declaracion y uso de punteros 
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h>

int a[]={1,23,17,4,-5,100};
int *ptr;

int main()
{
	int i;
	ptr=&a[0];//apuntamos nuestro puntero al primer elemento del arreglo
	printf("\n\n");
	for(i=0;i<6;i++)
	{
		printf("Mi arreglos[%d]= %-4d",i,a[i]);// <-- A
		printf("ptr + %d = %d\n",i,*(ptr+i));// <-- B
	}
}