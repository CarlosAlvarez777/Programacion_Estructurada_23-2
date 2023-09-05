#include<stdio.h>
#include<stdlib.h>
#include<random>

main()
{
	//Carlos Alvarez 366182
    //01 Septiembre 2023
    //Piedra, papel o tijera contra la consola seleccion multiple
    //CAAA_PE_ACT4_09
	int jugador, pc;
	pc = (rand()%3);
	printf("Elige una opcion: \n");
	printf("1.- Piedra\n");
	printf("2.- Papel\n");
	printf("3.- Tijera\n");
	scanf("%d",&jugador);
    switch (jugador)
    {
    case 1:
        printf("El usuario ha seleccionado piedra\n");
        break;
    case 2:
        printf("El usuario ha seleccionado papel\n");
        break;
    case 3:
        printf("El usuario ha selecionado tijeras\n");
        break;
    default:
        printf("Error: No se puede seleccionar otra cosa que no sea piedra, papel o tijera.\n");
        break;
    }
    switch (pc)
    {
    case 1:
        printf("La pc ha seleccionado piedra\n");
        if (jugador==pc)
	    {
		    printf("Es un empate\n");
        }
        else
        {
            if (jugador==2)
		    {	
		        printf("El ganador es el usuario\n");
		    }
            else
		    {
			    printf("El ganador es la pc\n");
		    }
        }
        break;
    case 2:
        printf("La pc ha seleccionado papel\n");
        if (jugador==pc)
	    {
		    printf("Es un empate\n");
        }
        else
        {
            if (jugador==3)
		    {	
		        printf("El ganador es el usuario\n");
		    }
            else
		    {
			    printf("El ganador es la pc\n");
		    }
        }
        break;
    case 3:
        printf("La pc ha selecionado tijeras\n");
        if (jugador==pc)
	    {
		    printf("Es un empate\n");
        }
        else
        {
            if (jugador==1)
		    {	
		        printf("El ganador es el usuario\n");
		    }
            else
		    {
			    printf("El ganador es la pc\n");
		    }
        }
        break;
    default:
        printf("Error: No se puede seleccionar otra cosa que no sea piedra, papel o tijera.\n");
        break;
    }
    return 0;
}