#include<stdio.h>
#include<stdlib.h>

main()
{
    //Carlos Alvarez 366182
    //01 Septiembre 2023
    //El mayor de seis numeros
    //CAAA_PE_ACT4_03
    int n1, n2, n3, n4, n5, n6, m;
    printf("Inserte el primer numero: ");
    scanf("%d",&n1);
    printf("Inserte el segundo numero: ");
    scanf("%d",&n2);
    printf("Inserte el tercer numero: ");
    scanf("%d",&n3);
    printf("Inserte el cuarto numero: ");
    scanf("%d",&n4);
    printf("Inserte el quinto numero: ");
    scanf("%d",&n5);
    printf("Inserte el sexto numero: ");
    scanf("%d",&n6);
    m=n1;
    if (n2>m)
    {
        m=n2;
    }
    if (n3>m)
    {
        m=n3;
    }
    if (n4>m)
    {
        m=n4;
    }
    if (n5>m)
    {
        m=n5;
    }
    if (n6>m)
    {
        m=n6;
    }
    printf("El numero mayor es: %d",m);
    return 0;
}