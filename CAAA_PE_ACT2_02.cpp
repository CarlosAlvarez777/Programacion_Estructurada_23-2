#include<stdio.h>
#include<stdlib.h>

main()
{
    //Carlos Alvarez 366182
    //25 Agosto 2023
    //Verificar si un numero entero es par o impar
    //CAAA_PE_ACT2_02
    int num;
    float residuo;
    printf("Inserte un numero entero: ");
    scanf("%d",&num);
    residuo=num%2;
    if (residuo==0)
    {
        printf("El numero %d es par", num);
    }
    if (residuo>0)
    {
        printf("El numero %d es impar", num);
    }
}