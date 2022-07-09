// Practica 9 
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h>

int main()
{//programa comparacion de punteros 
	int i=100, *p1, *p2;
	p1=&i;
	p2=p1;
	if(p1==p2)//estamos comparando dos punteros
	printf("p1 apunta a la misma direccion de memoria que p2\n");
	*p1=*p1+2;//el * tiene mas prioridad que el +
	printf("el valor de *p2 es %d\n",*p2);
	(*p2)++;//ante la duda de prioridades usamos parametros
	printf("el valor de *p1 es %d\n",*p1);
	i--;
	printf("El valor de i es %d \n",i);
	
	//*p1=*p1+2;
	/*printf("el valor de *p2 es %d\n",*p2);
	(*p2)++;//ante la duda de prioridades usamos parametros
	i--;
	printf("El valor de i es %d \n",i);*/
}