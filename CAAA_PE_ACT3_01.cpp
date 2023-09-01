#include<stdio.h>
#include<stdlib.h>
main()
{
    //Carlos Alvarez 366182
    //31 Agosto 2023
    //Promedio de un alumno
    //CAAA_PE_ACT3_01
	int calif1, calif2, calif3, prom;
	printf("Inserte su calificacion: ");
	scanf("%d", &calif1);
	printf("Inserte su calificacion: ");
	scanf("%d", &calif2);
	printf("Inserte su calificacion: ");
	scanf("%d", &calif3);
	
	prom = (calif1 + calif2 + calif3) / 3;
	
	if(prom >= 80)
	{
		if(prom >= 98)
		{
			if(prom > 100)
			{
				printf("Error");
			}
			else
			{
				printf("Excelente");
			}
		}
		else
		{
			if(prom >= 90)
			{
				printf("Muy bien");
			}
			else
			{
				printf("Bien");
			}
		}
	}
	else
	{
		if(prom >= 60)
		{
			if(prom >= 70)
			{
				printf("Regular");
			}
			else
			{
				printf("Suficiente");
			}
		}
		else
		{
			if(prom >= 30)
			{
				printf("Extraordinario");
			}
			else
			{
				printf("Repetir");
			}
		}
	}
    printf("\nTu promedio: %d", prom);
	return 0;
}