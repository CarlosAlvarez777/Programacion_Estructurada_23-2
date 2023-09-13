#include<stdio.h>
#include<stdlib.h>
#include<random>
#define N 35
int msg();
void menu();
void descendente(void);
void par_impar(void);
void mayor_menor(void);
void tablas(void);

int main()
{
    //Carlos Antonio Alvarez Angulo 366182
    //12 Septiembre 2023
    //Menu de funciones
    //CAAA_PE_ACT6
    menu();
    return 0;
}
int msg()
{
    int op;
    system("CLS");
    printf("Menu\n");
    printf("1.- Numeros menores que n en orden descendiente\n");
    printf("2.- Numeros pares e impares aleatorios\n");
    printf("3.- Mayor y menor de 35 numeros entre 100 y 200\n");
    printf("4.- Tablas de multiplicar\n");
    printf("5.- Salir\n");
    printf("Elige una opcion: ");
    scanf("%d",&op);
    return op;
}
void menu()
{
    int op;
    do
    {
        op=msg();
        switch(op)
        {
            case 1:
                descendente();
                break;
            case 2:
                par_impar();
                break;
            case 3:
                mayor_menor();
                break;
            case 4:
                tablas();
                break;
        }
    }
    while(op!=5);
}
void descendente(void)
{
    int n, i;
    system("CLS");
    printf("Inserte un numero entero positivo: ");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Error: valor invalido");
    }
    else
    {
        i=n;
        do
        {
            printf("%d\n",i);
            i=i-1;
        }
        while (i!=-1);
    }
    system("PAUSE");
}
void par_impar(void)
{
    int n, i, j, k, par, impar;
    float residuo;
    system("CLS");
    i=0;
    j=0;
    k=0;
    par=0;
    impar=0;
    do
    {
        n=(rand()%200);
        residuo=n%2;
        if (residuo==0)
        {
            printf("El numero %d es par\n", n);
            par=par+n;
            j++;
        }
        else
        {
            printf("El numero %d es impar\n", n);
            impar=impar+n;
            k++;
        }
        i++;
    } 
    while (i<40);
    printf("La cantidad de numeros pares es: %d\n",j);
    printf("La suma de los numeros pares es: %d\n",par);
    printf("La cantidad de numeros impares es: %d\n",k);
    printf("La suma de los numeros impares es: %d\n",impar);
    system("PAUSE");
}
void mayor_menor(void)
{
    int n, i, mayor, menor;
    system("CLS");
    for(i=0;i<N;i++)
    {
        n=(100+rand()%100);
        printf("%d\n",n);
        if(i==0)
        {
            mayor=n;
            menor=n;
        }
        else
        {
            if(n>mayor)
            {
                mayor=n;
            }
            else
            {
                if(n<menor)
                {
                    menor=n;
                }
            }
        }
    }
    printf("El numero mayor de los numeros generados es: %d\n", mayor);
    printf("El numero menor de los numeros generados es: %d\n", menor);
    system("PAUSE");
}
void tablas(void)
{
    int n, i;
    system("CLS");
	printf("Ingresa la tabla que quieres desplegar: ");
	scanf("%d",&n);
    printf("Haz seleccionado la tabla del %d\n", n);
	for (i=1;i<=10;i++) 
	{
		printf("%d x %d = %d\n",n,i,n*i);
	}
    system("PAUSE");
}