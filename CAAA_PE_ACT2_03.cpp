#include<stdio.h>
#include<stdlib.h>

main()
{
    //Carlos Alvarez 366182
    //25 Agosto 2023
    //Calcular promedio con condicion compuesta
    //CAAA_PE_ACT2_03
    int c1, c2, c3, c4;
    float prom;
    printf("Inserte la primera calificacion: ");
    scanf("%d", &c1);
    printf("Inserte la segunda calificacion: ");
    scanf("%d", &c2);
    printf("Inserte la tercera calificacion: ");
    scanf("%d", &c3);
    printf("Inserte la cuarta calificacion: ");
    scanf("%d", &c4);
    prom=(c1+c2+c3+c4)/4;
    if (prom<60)
    {
        printf("Tu promedio: %0.0f, REPROBADO", prom);
    }
    else
    {
        printf("Tu promedio: %0.0f, APROBADO", prom);
    }
    return 0;
}