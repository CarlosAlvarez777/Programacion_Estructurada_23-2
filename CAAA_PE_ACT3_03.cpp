#include <stdio.h>
#include <stdlib.h>

main()
{
    //Carlos Alvarez 366182
    //31 Agosto 2023
    //Ordenar tres numeros de forma ascendente
    //CAAA_PE_ACT3_03
    int n1,n2,n3;
    printf("Inserte el primer numero: ");
    scanf("%d",&n1);
    printf("Inserte el segundo numero: ");
    scanf("%d",&n2);
    printf("Inserte el tercer numero: ");
    scanf("%d",&n3);
    if(n1<n2)
    {
        if (n1<n3)
        {
            if (n2<n3)
            {
                printf("Los valores ordenados de menor a mayor son: %d %d %d.", n1,n2,n3);
            }
            else
            {
                printf("Los valores ordenados de menor a mayor son: %d %d %d.", n1,n3,n2);
            }
        }
        else
        {
            printf("Los valores ordenados de menor a mayor son: %d %d %d.", n3,n1,n2);
        }
    }
    else
    {
        if (n1<n3)
        {
            printf("Los valores ordenados de menor a mayor son: %d %d %d.", n2,n1,n3);
        }
        else
        {
            if (n3<n2)
            {
                printf("Los valores ordenados de menor a mayor son: %d %d %d.", n3,n2,n1);
            }
            else
            {
                printf("Los valores ordenados de menor a mayor son: %d %d %d.", n2,n3,n1);
            }
        }
    }
    return 0;
}