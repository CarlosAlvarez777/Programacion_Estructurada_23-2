#include<stdio.h>
#include<stdlib.h>

main()
{
    //Carlos Alvarez 366182
    //25 Agosto 2023
    //Calcular promedio con condicion anidada por el lado falso
    //CAAA_PE_ACT2_06
	int calif1, calif2, calif3; 
	float prom;
	printf("Inserte la primera calificacion: ");
	scanf("%d", &calif1);
	printf("Inserte la segunda calificacion: ");
	scanf("%d", &calif2);
	printf("Inserte la tercera calificacion: ");
	scanf("%d", &calif3);
	
	prom = (calif1 + calif2 + calif3) / 3;
	if(prom > 100)
	{
		printf("error");
	}
	else
	{
		if(prom >= 98)
		{
			printf("excelente");
		}
		else
		{
			if(prom >= 90)
			{
				printf("muy bien");
			}
			else
			{
				if(prom >= 80)
				{
					printf("bien");
				}
				else
				{
					if(prom >= 70)
					{
						printf("regular");
					}
					else
					{
						if(prom >= 60)
						{
							printf("suficiente");
						}
						else
						{
							if(prom >= 30)
							{
								printf("extraordinario");
							}
							else
							{
								printf("repetir");
							}
						}
					}
				}
			}
		}
    }
	return 0;
}