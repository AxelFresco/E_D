// Practica 4

#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h>

int clave[12],contador,opc,r,color[10];
char producto[12][25];
float subtotal=0,precios[12][10],iva,total;


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
				gets(producto[contador]);
				fflush(stdin);
				printf("Color de la etiqueta ");
				printf("Capture:\n1 rojo\n2 azul\n3 verde\n4 blanco");
				scanf("%d",&color[contador]);
				fflush(stdin);
				printf("Cual es su precio: ");
				scanf("%f",&precios[contador][0]);
			
				switch(color[contador])
				{
					case 1:
						precios[contador][1]=precios[contador][0]*0.35;
					break;
					case 2:
						precios[contador][1]=precios[contador][0]*0.25;
					break;
					case 3:
						precios[contador][1]=precios[contador][0]*0.1;
					break;
					case 4:
						precios[contador][1]=0;
					break;
				}
				precios[contador][1]=precios[contador][0]*0.3;
				precios[contador][2]=precios[contador][0]-precios[contador][1];	
			break;
			
			case 2:
				system("cls");
				printf("Clave  Producto  Color    Precio  Descuento  Importe \n\n");
				for(r=1;r<=contador;r++)
				{
					printf("%-6d ",clave[r]);
					printf("%-9s ",producto[r]);
					switch(color[r])
					{
						case 1:
							printf("rojo");
						break;
						case 2:
							printf("verde");
						break;
						case 3:
							printf("azul");
						break;
						case 4:
							printf("blanco");
						break;
					}
					printf("%10.2f ",precios[r][0]);
					printf("%-11.2f ",precios[r][1]);
					printf("%.2f \n",precios[r][2]);
					subtotal+=precios[r][2];					
				}//termina for
				
				printf("Subtoral: %.2lf \n",subtotal);
				iva=subtotal*0.16;
				printf("IVA: %.2lf \n",iva);
				total=subtotal+iva;
				printf("Total: %.2lf \n",total);				
	
				system("pause");
			
			break;

		}//termina switch
	}while(opc<3);
	
}