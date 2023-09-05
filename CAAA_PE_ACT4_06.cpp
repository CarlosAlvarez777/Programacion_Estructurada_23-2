#include<stdio.h>
#include<stdlib.h>

main()
{
    //Carlos Alvarez 366182
    //01 Septiembre 2023
    //Calcular el consumo de agua
    //CAAA_PE_ACT4_06
    float mc, subtotal, iva, total;
    printf("Inserte los metros cubicos de agua consumidos: ");
    scanf("%f",&mc);
    if (mc < 16)
        if (mc < 5)
        {
            printf ("Consumo rango 1\n");
            subtotal=50;
        }
        else
        {
            printf ("Consumo rango 2\n");
            subtotal=50+(mc*8);
        }
    else
    {
        if (mc <= 50)
        {
            printf ("Consumo rango 3\n");
            subtotal=50+(mc*8)+(mc*10);
        }
        else
        {
            printf ("Consumo rango 4\n");
            subtotal=50+(mc*8)+(mc*10)+(mc*11);
        }
    }
    iva = subtotal * 0.16;
    total = subtotal + iva;
    printf ("Subtotal: %f\n", subtotal);
    printf ("IVA: %f\n", iva);
    printf ("Total %f", total);
    return 0;
}