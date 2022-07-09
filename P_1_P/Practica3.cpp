#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h>

int clave[12],opc,contador,r;
char descripcion[12][25];
float precios[12][3];

int main()
{
	do
	{
		system("cls");
		printf("MENU PRINCIPAL \n");
		printf("1 Captura de datos \n");
		printf("2 Lista general \n");
		printf("3 Salir del programa \n");
		fflush(stdin);
		printf("Que opcion quieres?");
		scanf("%d",&opc);
		switch(opc)
		{
			case 1:
				system("cls");
				contador++;
				fflush(stdin);
				printf("Clave del producto ");
				scanf("%d",&clave[contador]);
				fflush(stdin);
				printf("Producto a comprar ");
				gets(descripcion[contador]);
				fflush(stdin);
				printf("Cual es su precio ");
				scanf("%f",&precios[contador][0]);
				precios[contador][1]=precios[contador][0]*0.3;
				precios[contador][2]=precios[contador][0]-precios[contador][1];	
			break;
			
			case 2:
				system("cls");
				printf("Clave  descripcion    precio     descuento   importe \n\n");
				for(r=1;r<=contador;r++)
				{
					printf("%-6d ",clave[r]);
					printf("%-15s",descripcion[r]);
					printf("%-10.2f ",precios[r][0]);
					printf("%-12.2f ",precios[r][1]);
					printf("%.2f \n",precios[r][2]);					
				}
				system("pause");
			break;
		}//termina switch
	}while(opc<3);
	
}