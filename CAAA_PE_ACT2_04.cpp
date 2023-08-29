#include<stdio.h>
#include<stdlib.h>

main()
{
    //Carlos Alvarez 366182
    //25 Agosto 2023
    //Calcular promedio con condicion compuesta
    //CAAA_PE_ACT2_04
	int opcion; 
	printf(" 1.-hombre \n 2.-mujer \n elije una opcion: ");
	scanf("%d", &opcion);
	
	if(opcion == 1)
	{
		printf("Hola, eres hombre.");
	}
	else
	{
		printf("Hola, eres mujer.");
	}
	return 0;	
}