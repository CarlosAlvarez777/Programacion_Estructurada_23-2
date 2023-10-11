#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<random>
#include "C:\Users\Carlos\Desktop\Anthony\Cursos\Programacion Estructurada\CAAA_PE_ACT10\anthony_h/anthony.h"
int msg();
void menu();
void add_vect_rand(int vect1[], int m, int ri, int rf);
void imp_vect(int vect1[], int m);
void add_mat(int mat[4][4], int m, int n, int ri, int rf);
void imp_mat(int mat[4][4], int m, int n);
void buscar(int vect1[], int m);
int main()
{
    menu();
    return 0;
}
int msg()
{
    int op;
    system("CLS");
    printf("Menu\n");
    printf("1.- Llenar un vector aleatoriamente\n");
    printf("2.- Llenar una matriz 4x4 aleatoriamente\n");
    printf("3.- Imprimir un vector\n");
    printf("4.- Imprimir una matriz 4x4\n");
    printf("5.- Ordenar vector\n");
    printf("6.- Buscar un valor en el vector\n");
    printf("0.- Salir\n");
    printf("Escoje una opcion: ");
    scanf("%d",&op);
    return op;
}
void menu()
{
    int op, vect1[15],mat[4][4], m, n, ri, rf;
    do
    {
        op=msg();
        switch (op)
        {
        case 1:
            add_vect_rand(vect1, 15, 100, 200);
            break;
        case 2:
            add_mat(mat, 4, 4, 1, 16);
            break;
        case 3:
            imp_vect(vect1, 15);
            break;
        case 4:
            imp_mat(mat, 4, 4);
            break;
        case 5:
            ordenar(vect1, 15);
            break;
        case 6:
            buscar(vect1, 15);
            break;
        }
    }
    while (op!=0);
}
void add_vect_rand(int vect1[], int m, int ri, int rf)
{
    int i, j, rango, num, band;
    system("CLS");
    ri=100;
    rf=200;
    m=15;
    rango=(rf-ri)+1;
    for(i=0;i<m;i++)
    {
        do
        {
            num=(rand()%rango)+ri;
            j=0;
            band=false;
            while (j<i && band==false)
            {
                if (num==vect1[j])
                {
                    band=true;
                }
                j++;
            }
        }
        while (band==true);
        vect1[i]=num;
    }
    system("PAUSE");
}
void imp_vect(int vect1[], int m)
{
    int i;
    system("CLS");
    printf("Vector 1: \n");
    m=10;
    for(i=0;i<m;i++)
    {
        printf("POS [%d]: %d, ",i,vect1[i]);
    }
    system("PAUSE");
}
void add_mat(int mat[4][4], int m, int n, int ri, int rf)
{
    int i, j, k, l, rango, num, band;
    system("CLS");
    ri=1;
    rf=16;
    m=4;
    n=4;
    rango=(rf-ri)+1;
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            do
            {
                num=(rand()%(rf-ri+1))+ri;
                band=0;
                for (k=0;k<i;k++)
                {
                    for (l=0;l<j;l++)
                    {
                        if (num==mat[k][l])
                        {
                            band=1;
                            break;
                        }
                    }
                }
            } while (band);
            mat[i][j] = num;
        }
    }
    system("PAUSE");
}
void imp_mat(int mat[4][4], int m, int n)
{
    int i, j;
    system("CLS");
    m=4;
    n=4;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    system("PAUSE");
}
void buscar(int vect1[], int m)
{
    int i, num, x;
    system("CLS");
    num=vali_num(100, 200, "Inserte el numero que busca: ");
    ordenar(vect1, m);
    x=-1;
    for (i=0;i<m;i++)
    {
        if (vect1[i] == num)
        {
            x = i;
            break;
        }
    }
    if (x != -1)
    {
        printf("Si existe\n");
        printf("%d esta en el indice: %d\n", num, x);
    }
    else
    {
        printf("No existe\n");
    }
    system("PAUSE");
}