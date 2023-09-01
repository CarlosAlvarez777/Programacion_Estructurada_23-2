#include<stdio.h>
#include<stdlib.h>

main() 
{
	//Carlos Alvarez 366182
    //31 Agosto 2023
    //Encontrar el medio de tres numeros
    //CAAA_PE_ACT3_02
	int n1, n2, n3;
	printf("Inserte el primer numero: ");
	scanf("%d",&n1);
	printf("Inserte el segundo numero: ");
	scanf("%d",&n2);
	printf("Inserte el tercer numero: ");
	scanf("%d",&n3);
	if (n1>n2) 
	{
		if (n1>n3) 
		{
			if (n2>n3) 
			{
				printf("El numero del medio es el segundo numero: %d", n2);
			} 
			else 
			{
				printf("El numero del medio es el tercer numero: %d", n3);
			}
		} 
		else 
		{
			if (n1>n2) 
			{
				printf("El numero del medio es el primer numero: %d", n1);
			} 
			else 
			{
				printf("El numero del medio es el segundo numero: %d", n2);
			}
		}
	} 
	else 
	{
		if (n2>n3) 
		{
			if (n1>n3) 
			{
				printf("El numero del medio es el primer numero: %d", n1);
			} 
			else 
			{
				printf("El numero del medio es el tercer numero: %d", n3);
			}
		} 
		else 
		{
			if (n1>n2) 
			{
				printf("El numero del medio es el primer numero: %d", n1);
			} 
			else 
			{
				printf("El numero del medio es el segundo numero: %d", n2);
			}
		}
	}
	return 0;
}