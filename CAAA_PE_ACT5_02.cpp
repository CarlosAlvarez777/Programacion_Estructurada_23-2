#include<stdio.h>
#include<stdlib.h>
#include<random>

main()
{
	//Carlos Alvarez 366182
    //08 Septiembre 2023
    //Piedra, papel o tijera contra la consola anidado
    //CAAA_PE_ACT5_02
	int jugador, pc;
	pc = (rand()%3);
	printf("Elige una opcion: \n");
	printf("1.- Piedra\n");
	printf("2.- Papel\n");
	printf("3.- Tijera\n");
	scanf("%d",&jugador);
	if (jugador==1)
	{
		printf("El usuario ha seleccionado piedra\n");
	}
	else
	{
		if (jugador==2)
		{
			printf("El usuario ha seleccionado papel\n");
		}
		else
		{
			if (jugador==3)
			{
				printf("El usuario ha selecionado tijeras\n");
			}
			else 
			{
				printf("Error: No se puede seleccionar otra cosa que no sea piedra, papel o tijera.\n");
			}
		}
	}
	if (pc==1)
	{
		printf("La pc ha seleccionado piedra\n");
	} 
	else 
	{
		if (pc==2)
		{
			printf("La pc ha seleccionado papel\n");
		}
		else
		{
			if (pc==3)
			{
				printf("La pc ha selecionado tijeras\n");
			}
			else
			{
				printf("Error: No se puede seleccionar otra cosa que no sea piedra, papel o tijera.\n");
			}
		}
	}	
	if (jugador==1)
	{
		if (pc==3)
		{
			printf("El ganador es el usuario\n");
		}
	}
	else
	{
		if (jugador==2)
		{
			if (pc==1)
			{
				printf("El ganador es el usuario\n");
			}
		}
		else 
		{
			if (jugador==3)
			{
				if (pc==2)
				{
					printf("El ganador es el usuario\n");
				}
			}
			else
			{
				printf("El ganador es la pc\n");
			}
		}
	}
	if (jugador==pc)
	{
		printf("Es un empate\n");
	}
	return 0;
}