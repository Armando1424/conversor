// Conversor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

//ejemplo
int mat = 15, prog = 70;
float prom = 185.3245f;

int main()
{
	//ejemplo
	printf("Dame\n calificaci%cn de Matematicas\t",162);
	printf("Observe como \n imprime y \"Entienda\",como trabaja");
	printf("\t Un float mostrado con 1 decimal %.1f",prom);
	printf("\n Ahora el entero %d y su valor ASCII es %c \n",prog,prog);
	printf("\a\a\a\a\a\a Multiplico %d * %d el resultado es %d \n Gracias\n",mat,prog,mat*prog);
	

	//convertir de Dolares a Euros
	float dolar, euro;
	euro = 0.846372f;
	printf("\a Ingrese la cantidad en dolares:   ");
	scanf_s("%f", &dolar);
	printf(" %f Dolar equivale a %f Euro\n ",dolar,dolar*euro);

	//convertir de Pesos a Euros
	float peso;
	euro = 0.0454974f;
	printf("\a Ingrese la cantidad en pesos:   ");
	scanf_s("%f", &peso);
	printf(" %f Pesos equivale a %f Euro\n", peso, peso*euro);

	//convertir de KM a Millas
	float km, milla;
	milla = 0.621371f;
	printf("\a Ingrese la cantidad de km:   ");
	scanf_s("%f", &km);
	printf(" %f KM equivale a %f Millas\n ", km, km*milla);

	system("PAUSE");
    return 0;
}

