#include <stdio.h>
#include <stdlib.h>
main()
{
    //Carlos Alvarez 366182
    //01 Septiembre 2023
    //Menu de conversion de unidades
    //CAAA_PE_ACT4_02
    float unidades, conv;
    int opcion;
    printf ("Programa conversor de longitud\n");
    printf ("Elija el tipo de conversion: \n");
    printf ("1. cm a pulgadas.\n");
    printf ("2. cm a pies.\n");
    printf ("3. Km a millas.\n");
    printf ("4. Pulgadas a cm.\n");
    printf ("5. pies a cm.\n");
    printf ("6. millas a Km.\n");
    printf ("Ingrese la opcion: ");
    scanf (" %d", &opcion);
    printf("Ingrese las unidades a convertir: ");
    scanf("%f",&unidades);

    switch ( opcion )
    {
    case 1:
        conv=unidades/2.54;
        printf("%f cm convertido a pulgadas es: %f in", unidades, conv);
        break;
    case 2: 
        conv=unidades/30.48;
        printf("%f cm convertido a pies es: %f ft", unidades, conv);
        break;
    case 3: 
        conv=unidades/1.609;
        printf("%f km convertido a millas es: %f mi", unidades, conv);
        break;
    case 4:
        conv=unidades*2.54;
        printf("%f in convertido a centimetros es: %f cm", unidades, conv);
        break;
    case 5:
        conv=unidades*30.48;
        printf("%f ft convertido a centimetros es: %f cm", unidades, conv);
        break;
    case 6:
        conv=unidades*1.609;
        printf("%f mi convertido a kilometros es: %f Km", unidades, conv);
        break;
        }
    return 0;
}