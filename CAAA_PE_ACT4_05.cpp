#include<stdio.h>
#include<stdlib.h>

main()
{
    //Carlos Alvarez 366182
    //01 Septiembre 2023
    //Calcular costo de llamadas
    //CAAA_PE_ACT4_05
    float subtotal, iva, total;
    int min, tipo;
    printf("Inserte la duracion de la llamada en minutos: ");
    scanf("%d",&min);
    printf ("Tipos de llamada: \n(1)Llamada Local\n(2)Llamada Nacional\n(3)Llamada Internacional\n");
    printf("Ingrese el tipo de llamada: ");
    scanf("%d",&tipo);
    if (tipo == 1)
    {
        subtotal = 3;
    }
    else
    {
        if (tipo == 2)
        {
            if (min > 3)
            {
                subtotal = ((min - 3) * 2) + 7;
            }
            else
            {
                subtotal = 7;
            }
        }
        else
        {
            if (min > 2)
            {
                subtotal = ((min - 2) * 4) + 9;
            }
        }
    }
    iva = subtotal * 0.16;
    total = subtotal + iva;
    printf ("Subtotal: %f\n", subtotal);
    printf ("IVA: %f\n", iva);
    printf ("Total: %f", total);
    return 0;
}