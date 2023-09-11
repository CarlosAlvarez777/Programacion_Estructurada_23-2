#include<stdio.h>
#include<stdlib.h>

main()
{
    //Carlos Alvarez 366182
    //08 Septiembre 2023
    //Encontrar el numero mayor
    //CAAA_PE_ACT5_04
    int n1, n2, n3;
    printf ("Inserte el primer numero: ");
    scanf ("%d", &n1);
    printf ("Inserte el segundo numero: ");
    scanf ("%d", &n2);
    printf ("Inserte el tercer numero: ");
    scanf ("%d", &n3);
    printf ("\n");
    if ((n1>n2 && n1>n3) || (n1>n2 && n1>n3))
    {
        printf ("El numero mayor es: %d", n1);
    }
    else 
    {
        if ((n2>n1 && n2>n3) || (n2>n1 && n2>n3)) 
        {
            printf ("El numero mayor es: %d", n2);
        } 
        else 
        {
            if ((n3>n1 && n3>n2) || (n3>n1 && n3>n2))
            {
                printf ("El numero mayor es: %d", n3);
            }
        }
    }
    return 0;
}