/*Class 1 Estructura de datos*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h>


int main()
{
	for(contador=1;contador<=3;contador++)
	{
		system("cls");
		fflush(stdin);
		printf("nombre de la persona ");
		gets(nombre); 
		fflush(stdin);
		printf("captura su edad ");
		scanf("%i",&edad);
		fflush(stdin);
		printf("masculino =m o femenino =f");
		scanf("%c",&genero);
		fflush(stdin);
		printf("su peso ");
		scanf("%f",&peso);
		fflush(stdin);
		printf("estatura ");
		scanf("%f",&estatura);
		fflush(stdin);	//fflush(stdin) hacer pausa en el programa
		printf("eres de mexico s=si n=no");
		scanf("%c",&origen);
		
		if(genero=='f')
		{
			sumaedades+=edad;
			contaf++;
		}	
		else
		{
			sumapeso+=peso;
			contam++;
		}
		
		if(edad>=18)
		{
			contamayores++;
		}
		
		if(estatura>estalta)
		{
			estalta=estatura;
			strcpy(nombalta,nombre);
		}
		
		if(estalta>estbaja)
		{
			estbaja=estatura;
			strcpy(nombaja,nombre);
		}	
		
		if(origen=='n')
		{
			estaextra+=estatura;
			contaextra++;
		}
	}
	
	promedadf=sumaedades/contaf;
	prompesom=sumapeso/contam;
	promestaextra=estaextra/contaextra;
	
	system("cls");
	printf("La persona mas alta es %s y mide %.2f \n",nombalta,estalta);
	printf("La persona mas baja es %s y mide %.2f \n",nombaja,estbaja); 
	printf("El promedio de edad de las mujeres es de %.2f\n",promedadf);
	printf("El promedio de peso de los hombres es de %.2f\n",prompesom);
	printf("hay %d mayores de edad \n",contamayores);
	printf("Promedio estatura extrajenros %.2f", promestaextra);
}