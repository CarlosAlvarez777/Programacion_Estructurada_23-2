#include<stdio.h>
#include<stdlib.h>

main()
{
    //Carlos Alvarez 366182
    //01 Septiembre 2023
    //Calcular promedio y anular el mas bajo
    //CAAA_PE_ACT4_07
    int c1, c2, c3, c4, c5;
    float prom;
    printf("Inserte la calificacion del primer examen: ");
    scanf("%d",&c1);
    printf("Inserte la calificacion del segundo examen: ");
    scanf("%d",&c2);
    printf("Inserte la calificacion del tercer examen: ");
    scanf("%d",&c3);
    printf("Inserte la calificacion del cuarto examen: ");
    scanf("%d",&c4);
    printf("Inserte la calificacion del quinto examen: ");
    scanf("%d",&c5);
    if (c1<c2)
	{
	    if (c1<c3)
		{
		    if (c1<c4)
			{
			    if (c1<c5)
				{
				    printf("Al ser menor se anula la calificacion: %d\n",c1);
				    prom = (c2+c3+c4+c5)/4;
				}
			    else
				{
				    printf("Al ser menor se anula la calificacion: %d\n",c5);
			    	prom = (c1+c2+c3+c4)/4;
				}
			}
		    else
			{
			    if (c4<c5)
				{
				    printf("Al ser menor se anula la calificacion: %d\n",c4);
				    prom = (c1+c2+c3+c5)/4;
				}
			    else
				{
				    printf("Al ser menor se anula la calificacion: %d\n",c5);
				    prom = (c1+c2+c3+c4)/4;
				}
			}
		}
	    else
		{
		    if (c3<c4)
			{
			    if (c3<c5)
				{
				    printf("Al ser menor se anula la calificacion: %d\n",c3);
				    prom = (c1+c2+c4+c5)/4;
				}
			    else
				{
				    printf("Al ser menor se anula la calificacion: %d\n",c5);
				    prom = (c1+c2+c3+c4)/4;
				}
			}
		    else
			{
			    if (c4<c5)
				{
				    printf("Al ser menor se anula la calificacion: %d\n",c4);
				    prom = (c1+c2+c3+c5)/4;
				}
			    else
				{
				    printf("Al ser menor se anula la calificacion: %d\n",c5);
				    prom = (c1+c2+c3+c4)/4;
				}
			}
		}
	}
    else
	{
	    if (c2<c3)
		{
		    if (c2<c4)
			{
			    if (c2<c5)
				{
				    printf("Al ser menor se anula la calificacion: %d\n",c2);
				    prom = (c1+c3+c4+c5)/4;
				}
			    else
				{
				    printf("Al ser menor se anula la calificacion: %d\n",c5);
				    prom = (c1+c2+c3+c4)/4;
				}
			}
		    else
			{
			    if (c4<c5)
				{
				    printf("Al ser menor se anula la calificacion: %d\n",c4);
				    prom = (c1+c2+c3+c5)/4;
				}
			    else
				{
				    printf("Al ser menor se anula la calificacion: %d\n",c5);
				    prom = (c1+c2+c3+c4)/4;
				}
			}
		}
	    else
		{
		    if (c3<c4)
			{
			    if (c3<c5)
				{
				    printf("Al ser menor se anula la calificacion: %d\n",c3);
				    prom = (c1+c2+c4+c5)/4;
				}
			    else
				{
				    printf("Al ser menor se anula la calificacion: %d\n",c5);
				    prom = (c1+c2+c3+c4)/4;
				}
			}
		    else
			{
			    if (c4<c5)
				{
				    printf("Al ser menor se anula la calificacion: %d\n",c4);
				    prom = (c1+c2+c3+c5)/4;
				}
			    else
				{
				    printf("Al ser menor se anula la calificacion: %d\n",c5);
				    prom = (c1+c2+c3+c4)/4;
				}
			}
		}
	}
	printf("El promedio de los examen es: %f",prom);
	return 0;
}