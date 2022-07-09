//Practica 5 v2

#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h>

int clave[65];               
int xclave;                  
int xr;                     
int xmateria;                
char alumnos[65][40];        
char encontrado;             
float calif[65][7];          
float promedios[7];          
int opc,otro,r,c,contador; 
int contadorR;             

int main()
{
	do
	{
		system("cls");
		printf("MENU PRINCIPAL\n");
		printf("1 Captura de datos \n");
		printf("2 Lista general de alumnos \n");
		printf("3 Lista de alumnos con un promedio aprobatorio \n");
		printf("4 Lista de alumnos con un promedio NO aprobatorio \n");
		printf("5 Busqueda por clave del alumno \n");
		printf("6 Lista por materia \n");
		printf("7 Salir del programa \n");
		//fflush(stdin);
		printf("Selecciona una opcion: \n");
		scanf("%d",&opc);
		switch(opc)
		{
			case 1:
				do
				{
					system("cls");
					contador++;					//contador=fila
					fflush(stdin);				
					printf("Clave del alumno: ");
					scanf("%d",&clave[contador]);
					fflush(stdin);
					printf("Nombre del alumno: ");
					gets(alumnos[contador]);
					fflush(stdin);
					printf("\nCalificacion de base de datos: ");
					scanf("%f",&calif[contador][1]);
					fflush(stdin);
					printf("Calificacion de redes: ");
					scanf("%f",&calif[contador][2]);
					fflush(stdin);
					printf("Calificacion de estructura: ");
					scanf("%f",&calif[contador][3]);
					fflush(stdin);
					printf("Calificacion de sistemas operativos: ");
					scanf("%f",&calif[contador][4]);
					fflush(stdin);
					printf("Calificacion de memorias y perifericos: ");
					scanf("%f",&calif[contador][5]);
					fflush(stdin);
					printf("Calificacion de metodos numericos: ");
					scanf("%f",&calif[contador][6]);

                    for(c=1;c<=6;c++)
                    {
                        calif[contador][0]+=calif[contador][c];
                    }
                    calif[contador][0]=(calif[contador][0])/6;

                    printf("\nPromedio %.2f \n\n",calif[contador][0]);

					fflush(stdin);
					printf("Quieres capturar otro alumno teclea s para si o cualquier letra para no \n");
					scanf("%c",&otro);
				}while(otro=='s' || otro=='S'); 
			break;

			case 2:
                for(c=0;c<=6;c++)
                {
                    promedios[c]=0;
                }
                system("cls");
			    printf("\t\tclave  \tnombre  \tprom  \tB.D.  \tRedes  \tEstructura  \tSO  \tMemoerias  \tMetodos \n\n");
			    for(r=1;r<=contador;r++)
                {
                	printf("\n [%i] \t\t",r);
                    printf(" %d \t",clave[r]);
                    printf(" %s \t\t",alumnos[r]);
                    for(c=0;c<=6;c++)//for anidado
                    {
                        printf("%.2f\t",calif[r][c]);
                        promedios[c]+=calif[r][c];
                        
                    }
                    
                    printf("\n");
                }//termina for r
                printf("\t\t\t");
                printf("\nPromedio:\t\t\t\t");
                for(c=0;c<=6;c++)//for anidado
                {
                    promedios[c]  =promedios[c]/contador;
                    printf("%.2f \t",promedios[c]);
                    
                }
				printf("\n\n");	
                system("pause");
			break;

			case 3:
				contadorR=0;
                for(c=0;c<=6;c++)
                {
                    promedios[c]=0;
                }
                system("cls");

			    printf("\t\tclave  \tnombre  \tprom  \tB.D.  \tRedes  \tEstructura  \tSO  \tMemoerias  \tMetodos \n\n");
			    
			    for(r=1;r<=contador;r++)
                {
                	if(calif[r][0]>=6)
                    {
                    	printf("\n [%i] \t\t",r);
	                    printf(" %d \t",clave[r]);
	                    printf(" %s \t\t",alumnos[r]);
	                    for(c=0;c<=6;c++)//for anidado
	                    {
	                        printf("%.2f\t",calif[r][c]);
	                        promedios[c]+=calif[r][c];
	                        
	                    }
	                    
	                    printf("\n");
                    }else{
                    	contadorR++;
                    }
                	
                }//termina for r
                printf("\t\t\t%d",contadorR);
                
                if(contador -contadorR !=0 ){
                	
	                printf("\n-----Promedio:\t\t\t\t");
	                for(c=0;c<=6;c++)//for anidado
	                {
	                    promedios[c]  =promedios[c]/(contador-contadorR);
	                    printf("%.2f \t",promedios[c]);
	                    
	                }
	            }
				printf("\n\n");	
                system("pause");
			break;
			
			case 4:
				contadorR=0;
                for(c=0;c<=6;c++)
                {
                    promedios[c]=0;
                }
                system("cls");

			    printf("\t\tclave  \tnombre  \tprom  \tB.D.  \tRedes  \tEstructura  \tSO  \tMemoerias  \tMetodos \n\n");
			    
			    for(r=1;r<=contador;r++)
                {
                	if(calif[r][0]<6)
                    {
                    	printf("\n [%i] \t\t",r);
	                    printf(" %d \t",clave[r]);
	                    printf(" %s \t\t",alumnos[r]);
	                    for(c=0;c<=6;c++)//for anidado
	                    {
	                        printf("%.2f\t",calif[r][c]);
	                        promedios[c]+=calif[r][c];
	                        
	                    }
	                    
	                    printf("\n");
                    }else{
                    	contadorR++;
                    }
                	
                }//termina for r
                if(contadorR>0)
                {
                	
	                printf("\t\t\t");
	                printf("\nPromedio:\t\t\t\t");
	                for(c=0;c<=6;c++)//for anidado
	                {
	                    promedios[c]  =promedios[c]/(contador-contadorR);
	                    printf("%.2f \t",promedios[c]);
	                    
	                }
	            }  
				printf("\n\n");	
                system("pause");
			break;


			case 5:
                system("cls");
                encontrado='n';
                fflush(stdin);
                printf("Clave del alumno a buscar: ");
                scanf("%d",&xclave);
                
                printf("\n\t\tclave  \tnombre  \tprom  \tB.D.  \tRedes  \tEstructura  \tSO  \tMemoerias  \tMetodos \n");
                for(xr=1;xr<=contador;xr++)
                {
                    if(clave[xr]==xclave)
                    {
                        encontrado='s';
                        r=xr;
                        xr=contador;
                    }
                }
                if(encontrado=='s')
                {
                	printf("\n [%i] \t\t",r);
                    printf(" %d \t",clave[r]);
                    printf(" %s \t\t",alumnos[r]);
                    
                    for(c=0;c<=6;c++)//for anidado
                    {
                        printf("%.2f\t",calif[r][c]);
                    }
                }
                else
                {
                    printf("\n\t\tclave del alumno no encontrado \n");

                }
                printf("\n\n");
                system("pause");
			break;

			case 6:
			    system("cls");
                printf("\n 1 base de datos ");
                printf("\n 2 redes ");
                printf("\n 3 estructura ");
                printf("\n 4 sistemas operativos ");
                printf("\n 5 memorias y perifericos ");
                printf("\n 6 metodos numericos ");
				printf("\n\nQue calificaciones quieres alistar: ");
				fflush(stdin);
				
				scanf("%i", &xmateria);
				system("cls");
				printf("\n\tclave  alumno  calificacion\n");
				for(r=1;r<=contador;r++)
                {
                    printf("\t%d ",clave[r]);
                    printf("%s ",alumnos[r]);
                    printf("%.2f\n",calif[r][xmateria]);
                }
                printf("\n\n");
                system("pause");
			break;
			case 7:
				printf("\n\nSaldra.....");
			break;
			default:
				printf("capture del 1 al 7");
				system("pause");
			break;
		}

	}while(opc!=7);
}
