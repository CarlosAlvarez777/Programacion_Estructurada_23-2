#include<stdio.h>
#include<stdlib.h>

main()
{
    //Carlos Alvarez 366182
    //25 Agosto 2023
    //Calcular promedio con condicion anidada por el lado verdadero
    //CAAA_PE_ACT2_05
	int calif1, calif2, calif3; 
	float prom;
	printf("Inserte la primera calificacion: ");
	scanf("%d", &calif1);
	printf("Inserte la segunda calificacion: ");
	scanf("%d", &calif2);
	printf("Inserte la tercera calificacion: ");
	scanf("%d", &calif3);
	
	prom = (calif1 + calif2 + calif3) / 3;
	if(prom <= 100)
	{
		if(prom < 98)
		{
			if(prom < 90)
			{
				if(prom < 80)
				{
					if(prom < 70)
					{
						if(prom < 60)
						{
							if(prom < 30)
							{
								printf("Repetir");
    						}
							else
							{
								printf("Extraordinario");
							}
    					}
						else
						{
							printf("Suficiente");
						}
    				}
					else
					{
						printf("Regular");
					}
    			}
				else
				{
					printf("Bien");
				}
    		}
			else
			{
				printf("Muy bien");
			}
    	}
		else
		{
			printf("Excelente");
		}
    }
	else
	{
		printf("Error");
	}
	return 0;
}
