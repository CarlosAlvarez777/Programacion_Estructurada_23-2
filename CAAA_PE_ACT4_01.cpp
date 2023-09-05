#include<stdio.h>
#include<stdlib.h>

main()
{
    //Carlos Alvarez 366182
    //01 Septiembre 2023
    //Menu de las operaciones basicas
    //CAAA_PE_ACT4_01
    int n1, n2, opcion;
    float res;
    printf( ">>> MENU CALCULADORA <<<\n" );
    printf( "1. Sumar dos numeros.\n");
    printf( "2. Restar dos numeros.\n");
    printf( "3. Multiplicar dos numeros.\n");
    printf( "4. Dividir dos numeros.\n");
    printf( "5. Salir.\n");
    scanf("%d",&opcion);
    printf( "Inserte primer numero: " );
    scanf( "%d", &n1);
    printf( "Inserte segundo numero: " );
    scanf( "%d", &n2);
    switch (opcion)
    {
        case 1: 
            res=n1+n2;
            break;
        case 2: 
            res=n1-n2;
            break;
        case 3: 
            res=n1*n2;
            break;
        case 4: 
            if ( n2 != 0 )
            {
                res=n1/n2;
            }
            else
            {
                printf( "ERROR: No se puede dividir entre cero.\n" );
            }
        default:
            printf("Gracias por usar el programa.");
    }
    printf("El resultado es: %f",res);
    return 0;
}