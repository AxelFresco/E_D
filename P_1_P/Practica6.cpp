#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<conio.h>

struct persona
{
	char nombre[35]; 
	char direccion[45];
	char telefono[12];
	char correo[50];
	int edad;
	float ingresos;
};
persona companeros[20];

int c;

int main()
{
	for(c=1;c<=2;c++)
	{
		system("cls");
		fflush(stdin);
		printf("Nombre de la persona: ");
		gets(companeros[c].nombre);
		fflush(stdin);
		printf("Direccion: ");
		gets(companeros[c].direccion);
		fflush(stdin);
		printf("Telefono: ");
		gets(companeros[c].telefono);
		fflush(stdin);
		printf("Correo: ");
		gets(companeros[c].correo);
		fflush(stdin);
		printf("Edad: ");
		scanf("%d",&companeros[c].edad);
		fflush(stdin);
		printf("Ingresos: ");
		scanf("%f",&companeros[c].ingresos);
	}//fin del for
	system("cls");
	
	printf("Nombre  Direccion  Telefono  Correo         Edad  Ingresos\n");
	c=1;
	while(c<=2)
	{
		printf("%-8s",companeros[c].nombre);
		printf("%-11s",companeros[c].direccion);
		printf("%-10s",companeros[c].telefono);
		printf("%-15s",companeros[c].correo);
		printf("%-6d",companeros[c].edad);
		printf("%.2f  \n",companeros[c].ingresos);
		c++;
	}
	system("pause");
}//fin del main