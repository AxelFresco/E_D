#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h>

char articulo[12][35]; //nombre[40] servilletas
float precios[12][5];	
int contador; 

int main()
{
	do
	{
		contador++;
		system("cls");
		fflush(stdin);
		printf("Captura el articulo de venta ");
		gets(articulo[contador]);
		fflush(stdin);
		printf("Cual es su precio ");
		scanf("%f",&precios[contador][1]);
		fflush(stdin);
		printf("Cantidad de compra");
		scanf("%f",&precios[contador][0]);		
		precios[contador][2]=precios[contador][0]*precios[contador][1];
		precios[contador][3]=precios[contador][2]*0.16;
		precios[contador][4]=precios[contador][2]+precios[contador][3];	
		
	}while(contador<=1);
	
	system("cls");
	printf("Articulos   Cantidad    Precio    Importe   IVA	      Total\n\n");
	
	contador=1;	
	while(contador<=2)
	{
		printf("%-12s%-12.2f%-10.2f%-10.2f%-10.2f%.2f\n",articulo[contador],precios[contador][0],precios[contador][1],precios[contador][2],precios[contador][3],precios[contador][4]);
		contador++;
	}
}