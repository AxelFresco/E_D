#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h>

struct datos
{
	int id,departamento,temporada,tienda;
	char marca[20],descripcion[40];
	float precio,descuento,subtotal,iva,total;
};
datos almacen[100];
datos aux;

int opc,contar,c,i,j,r,xId,xTemporada,xTienda,l,xDepartamento;
char otro;
float acum[5],total,xPrecio;

void menu();
void captura();
void departamentos();
void impDepartamento(int depto);
void temporada();
void impTemporada(int tempo);
void tiendas();
void impTienda(int tienda);
void listaGeneral();
void impDescuento(int desc);
void impsubtotal(int subt);
void ordenar();

int main()
{
	while(opc!=7)
	{
		menu();
		printf("Elige una opcion: ");
		scanf("%d",&opc);
		switch(opc)
		{
			case 1:
			do
			{
				system("cls");
				contar++;
				captura();
				fflush(stdin);
				printf("Desea ingresar mas datos s para si cualquier tecla para no: ");
				scanf("%c",&otro);
			}while(otro=='s');
			break;
			case 2:
				system("cls");
				ordenar();
				listaGeneral();
				break;
			case 3://lista por departamento y temporada
				for(l=0;l<=4;l++)
				{
					acum[l]=0;
				}	
				system("cls");
				fflush(stdin);
				departamentos();
				fflush(stdin);
				printf("\nElige el departamento: ");
				scanf("%d",&xDepartamento);
				fflush(stdin);
				temporada();
				fflush(stdin);
				printf("\nElige la temporada: ");
				scanf("%d",&xTemporada);
				printf("id      Marca     Descripcion    Departamento   Temporada   Tienda    Precio  Descuento Subtotal  IVA       Total");
				for(c=1;c<=contar;c++)
				{
					if(xDepartamento==almacen[c].departamento&&xTemporada==almacen[c].temporada)
					{
						printf("\n%-8d",almacen[c].id);//espacios:8,10,15,12,8,10,10,10,10
						printf("%-10s",almacen[c].marca);
						printf("%-15s",almacen[c].descripcion);
						impDepartamento(almacen[c].departamento);
						impTemporada(almacen[c].temporada);
						impTienda(almacen[c].tienda);
						printf("%-8.2f",almacen[c].precio);
						impDescuento(almacen[c].tienda);	
						impsubtotal(almacen[c].tienda);
						almacen[c].iva=almacen[c].precio*0.16;
						printf("%-10.2f",almacen[c].iva);
						almacen[c].total=almacen[c].subtotal+almacen[c].iva;
						printf("%.2f",almacen[c].total);
						
						fflush(stdin);
							acum[0]+=almacen[c].precio;
					
							acum[1]+=almacen[c].descuento;
				
							acum[2]+=almacen[c].subtotal;
							
							acum[3]+=almacen[c].iva;
							
							acum[4]+=almacen[c].total;
					}
				}
				system("pause");
				break;
			case 4://lista por tienda y departamento
				for(l=0;l<=4;l++)
				{
					acum[l]=0;
				}	
				system("cls");
				fflush(stdin);
				tiendas();
				fflush(stdin);
				printf("\nElige la tienda: ");
				scanf("%d",&xTienda);
				fflush(stdin);
				departamentos();
				fflush(stdin);
				printf("\nElige la departamento: ");
				scanf("%d",&xDepartamento);
				printf("id      Marca     Descripcion    Departamento   Temporada   Tienda    Precio  Descuento Subtotal  IVA       Total");
				for(c=1;c<=contar;c++)
				{
					if(xTienda==almacen[c].tienda&&xDepartamento==almacen[c].departamento)
					{
						printf("\n%-8d",almacen[c].id);//espacios:8,10,15,12,8,10,10,10,10
						printf("%-10s",almacen[c].marca);
						printf("%-15s",almacen[c].descripcion);
						impDepartamento(almacen[c].departamento);
						impTemporada(almacen[c].temporada);
						impTienda(almacen[c].tienda);
						printf("%-8.2f",almacen[c].precio);
						impDescuento(almacen[c].tienda);	
						impsubtotal(almacen[c].tienda);
						almacen[c].iva=almacen[c].precio*0.16;
						printf("%-10.2f",almacen[c].iva);
						almacen[c].total=almacen[c].subtotal+almacen[c].iva;
						printf("%.2f",almacen[c].total);
						
							acum[0]+=almacen[c].precio;
					
							acum[1]+=almacen[c].descuento;
				
							acum[2]+=almacen[c].subtotal;
							
							acum[3]+=almacen[c].iva;
							
							acum[4]+=almacen[c].total;
					}
				}
				system("pause");
				break;
				break;
			case 5://lista por precio y temporada
				for(l=0;l<=4;l++)
				{
					acum[l]=0;
				}	
				system("cls");
				fflush(stdin);
				printf("Precio producto: ");
				scanf("%f",&xPrecio);
				fflush(stdin);
				temporada();
				scanf("%d",&xTemporada);
				printf("id      Marca     Descripcion    Departamento   Temporada   Tienda    Precio  Descuento Subtotal  IVA       Total");
				for(c=1;c<=contar;c++)
				{
					if(xPrecio==almacen[c].precio&&xTemporada==almacen[c].temporada)
					{
						printf("\n%-8d",almacen[c].id);//espacios:8,10,15,12,8,10,10,10,10
						printf("%-10s",almacen[c].marca);
						printf("%-15s",almacen[c].descripcion);
						impDepartamento(almacen[c].departamento);
						impTemporada(almacen[c].temporada);
						impTienda(almacen[c].tienda);
						printf("%-8.2f",almacen[c].precio);
						impDescuento(almacen[c].tienda);	
						impsubtotal(almacen[c].tienda);
						almacen[c].iva=almacen[c].precio*0.16;
						printf("%-10.2f",almacen[c].iva);
						almacen[c].total=almacen[c].subtotal+almacen[c].iva;
						printf("%.2f",almacen[c].total);
						
							acum[0]+=almacen[c].precio;
					
							acum[1]+=almacen[c].descuento;
				
							acum[2]+=almacen[c].subtotal;
							
							acum[3]+=almacen[c].iva;
							
							acum[4]+=almacen[c].total;
					}
				}
				system("pause");
				break;
			case 6://Busqueda por ID
				for(l=0;l<=4;l++)
				{
					acum[l]=0;
				}	
				system("cls");
				fflush(stdin);
				printf("Id: ");
				scanf("%d",&xId);
				printf("id      Marca     Descripcion    Departamento   Temporada   Tienda    Precio  Descuento Subtotal  IVA       Total");
				for(c=1;c<=contar;c++)
				{
					if(xId==almacen[c].id)
					{
						printf("\n%-8d",almacen[c].id);//espacios:8,10,15,12,8,10,10,10,10
						printf("%-10s",almacen[c].marca);
						printf("%-15s",almacen[c].descripcion);
						impDepartamento(almacen[c].departamento);
						impTemporada(almacen[c].temporada);
						impTienda(almacen[c].tienda);
						printf("%-8.2f",almacen[c].precio);
						impDescuento(almacen[c].tienda);	
						impsubtotal(almacen[c].tienda);
						almacen[c].iva=almacen[c].precio*0.16;
						printf("%-10.2f",almacen[c].iva);
						almacen[c].total=almacen[c].subtotal+almacen[c].iva;
						printf("%.2f",almacen[c].total);
						
							acum[0]+=almacen[c].precio;
					
							acum[1]+=almacen[c].descuento;
				
							acum[2]+=almacen[c].subtotal;
							
							acum[3]+=almacen[c].iva;
							
							acum[4]+=almacen[c].total;
					}
				}				
				system("pause");
				break;
	
		}
	}	
}

void menu()
{
	system("cls");
	printf("1 Captura de datos\n");
	printf("2 Lista general ordenada y totalizada\n");
	printf("3 Lista por departamento y temporada\n");
	printf("4 Lista por tienda y departamento\n");
	printf("5 Lista por precio y temporada\n");
	printf("6 Busqueda po id\n");
	printf("7 Salir del programa\n");
}

void captura()
{
	fflush(stdin);
	printf("Id: ");
	scanf("%d",&almacen[contar].id);
	fflush(stdin);
	printf("Marca: ");
	gets(almacen[contar].marca);
	fflush(stdin);
	printf("Descripcion: ");
	gets(almacen[contar].descripcion);
	fflush(stdin);
	printf("Departamento: ");
	departamentos();
	printf("Elige un departamento: ");
	scanf("%d",&almacen[contar].departamento);
	fflush(stdin);
	printf("Temporada: ");
	temporada();
	printf("Elige una temporada: ");
	scanf("%d",&almacen[contar].temporada);
	fflush(stdin);
	printf("Tienda: ");
	tiendas();
	printf("Elige una tienda: ");
	scanf("%d",&almacen[contar].tienda);
	fflush(stdin);
	printf("Precio: ");
	scanf("%f",&almacen[contar].precio);
}

void listaGeneral()
{
	printf("id      Marca     Descripcion    Departamento   Temporada   Tienda    Precio  Descuento Subtotal  IVA       Total");
	for(c=1;c<=contar;c++)
	{
		printf("\n%-8d",almacen[c].id);//espacios:8,10,15,12,8,10,10,10,10
		printf("%-10s",almacen[c].marca);
		printf("%-15s",almacen[c].descripcion);
		impDepartamento(almacen[c].departamento);
		impTemporada(almacen[c].temporada);
		impTienda(almacen[c].tienda);
		printf("%-8.2f",almacen[c].precio);
		impDescuento(almacen[c].tienda);	
		impsubtotal(almacen[c].tienda);
		almacen[c].iva=almacen[c].precio*0.16;
		printf("%-10.2f",almacen[c].iva);
		almacen[c].total=almacen[c].subtotal+almacen[c].iva;
		printf("%.2f",almacen[c].total);
		
			acum[0]+=almacen[c].precio;
			acum[1]+=almacen[c].descuento;
			acum[2]+=almacen[c].subtotal;
			acum[3]+=almacen[c].iva;			
			acum[4]+=almacen[c].total;
	}
	printf("\ntotal precio: %.2f",acum[0]);
	printf("\ntotal descuento: %.2f",acum[1]);
	printf("\ntotal subtotal: %.2f",acum[2]);	
	printf("\ntotal iva: %.2f",acum[3]);
	printf("\nTotal: %.2f",acum[4]);
	system("pause");
}
void departamentos()
{
	printf("\n1 Ropa\n");
	printf("2 Dulceria\n");
	printf("3 Panaderia\n");
	printf("4 Salchichoneria\n");
	printf("5 Electronica\n");
}
void impDepartamento(int depto)
{
	switch(depto)
	{
		case 1:
			printf("Ropa           ");
			break;
		case 2:
			printf("Dulceria       ");
			break;
		case 3:
			printf("Panaderia      ");
			break;
		case 4:
			printf("Salchichoneria ");
			break;
		case 5:
			printf("Electrinica    ");
			break;
		default:
			printf("NAN            ");
			break;
	}
}

void temporada()
{
	printf("\n1 Verano\n");
	printf("2 Invierno\n");
	printf("3 Otono\n");
	printf("4 Primavera\n");
}
void impTemporada(int tempo)
{
	switch(tempo)
	{
		case 1:
			printf("Verano      ");
			break;
		case 2:
			printf("Invierno    ");
			break;
		case 3:
			printf("Otono       ");
			break;
		case 4:
			printf("Primavera   ");
			break;
		default:
			printf("NAN         ");
			break;
	}
}

void tiendas()
{
	printf("\n1 Tienda 1\n");
	printf("2 Tienda 2\n");
	printf("3 Tienda 3\n");
	printf("4 Tienda 4\n");
	printf("5 Tienda 5\n");
}
void impTienda(int tienda)
{
	switch(tienda)
	{
		case 1:
			printf("Tienda 1  ");
			break;
		case 2:
			printf("Tienda 2  ");
			break;
		case 3:
			printf("Tienda 3  ");
			break;
		case 4:
			printf("Tienda 4  ");
			break;
		default:
			printf("NAN       ");
			break;
	}
}

void impDescuento(int desc)
{
	switch(desc)
	{
	case 1:
		almacen[c].descuento=almacen[c].precio*0.10;
		printf("%-10.2f",almacen[c].descuento);
		break;
	case 2:
		almacen[c].descuento=almacen[contar].precio*0.15;
		printf("%-10.2f",almacen[c].descuento);
		break;
	case 3:
		almacen[c].descuento=almacen[contar].precio*0.08;
		printf("%-10.2f",almacen[c].descuento);
		break;
	case 4:
		almacen[c].descuento=almacen[contar].precio*0.18;
		printf("%-10.2f",almacen[c].descuento);
		break;
	case 5:
		almacen[c].descuento=almacen[contar].precio*0.12;
		printf("%-10.2f",almacen[c].descuento);
		break;
	default:
		printf("NAN       ");
		break;
	}
}

void impsubtotal(int subt)
{
	switch(subt)
	{
	case 1:
		almacen[c].subtotal=almacen[c].precio-almacen[c].descuento;
		printf("%-10.2f",almacen[c].subtotal);
		break;
	case 2:
		almacen[c].subtotal=almacen[c].precio-almacen[c].descuento;
		printf("%-10.2f",almacen[c].subtotal);
		break;
	case 3:
		almacen[c].subtotal=almacen[c].precio-almacen[c].descuento;
		printf("%-10.2f",almacen[c].subtotal);
		break;
	case 4:
		almacen[c].subtotal=almacen[c].precio-almacen[c].descuento;
		printf("%-10.2f",almacen[c].subtotal);
		break;
	case 5:
		almacen[c].subtotal=almacen[c].precio-almacen[c].descuento;
		printf("%-10.2f",almacen[c].subtotal);
		break;
	default:
		printf("NAN       ");
		break;
	}
}

void ordenar()
{
	for(i=0;i<=contar;i++)
	{
		for(j=1;j<contar;j++)
		{
			if(almacen[j].id>almacen[j+1].id) //ascendente
			{
				aux=almacen[j];
				almacen[j]=almacen[j+1];
				almacen[j+1]=aux;	
			}
		}
	}
}

/*
void limpiar()
{
	int l;
	for(l=0;l<=4;l++)
	{
		acum[l]=0;
	}
 } 

void acumulador(datos d)
{
	acum[0]+=d.precio;
	acum[1]+=d.descuento;
	acum[2]+=d.subtotal;
	acum[3]+=d.iva;
	acum[4]+=d.total;
}*/
