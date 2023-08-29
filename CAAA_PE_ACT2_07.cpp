#include <stdio.h>
#include<stdlib.h>

main()
{
    //Carlos Alvarez 366182
    //25 Agosto 2023
    //Encontrar el menor de tres numeros
    //CAAA_PE_ACT2_07
    int n1, n2, n3;
    printf("Ingrese el primer numero: ");
    scanf("%d",&n1);
    printf("Ingrese el segundo numero: ");
    scanf("%d",&n2);
    printf("Ingrese el tercer numero: ");
    scanf("%d",&n3);
    if(n1<n2)
    {
        if(n1<n3)
        {
            printf("El numero menor es: %d",n1);
        }
        else
        {
            printf("El numero menor es: %d",n3);
        }
    }
    else
    {
        if(n2<n3)
        {
            printf("El numero menor es: %d",n2);
        }
        else
        {
            printf("El numero menor es: %d",n3);
        }
    }
    
    return 0;
}