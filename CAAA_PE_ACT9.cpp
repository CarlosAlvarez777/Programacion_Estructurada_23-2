#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<random>
int vali_num(int ri, int rf, char* msge);
int msg();
void menu();
void add_vect(int vect1[], int m, int ri, int rf);
void add_vect_rand(int vect2[], int m, int ri, int rf);
void add_vect3(int vect3[], int vect2[], int vect1[], int m=20);
void imp_vect(int vect3[], int vect2[], int vect1[], int m);
void add_mat(int mat[4][4], int vect2[], int vect1[], int m=4, int n=4);
void imp_mat(int mat[4][4], int m=4, int n=4);

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
    printf("1.- Llenar un vector manualmente\n");
    printf("2.- Llenar un vector aleatoriamente\n");
    printf("3.- Llenar un tercer vector con los vectores anteriores\n");
    printf("4.- Imprimir un vector\n");
    printf("5.- Llenar una matriz 4x4\n");
    printf("6.- Imprimir una matriz 4x4\n");
    printf("0.- Salir\n");
    printf("Escoje una opcion: ");
    scanf("%d",&op);
    return op;
}
void menu()
{
    int op, vect1[10], vect2[10], vect3[20], mat[4][4], m, n, ri, rf;
    do
    {
        op=msg();
        switch (op)
        {
        case 1:
            add_vect(vect1, 10, 30, 70);
            break;
        case 2:
            add_vect_rand(vect2, 10, 1, 20);
            break;
        case 3:
            add_vect3(vect3, vect2, vect1, 20);
            break;
        case 4:
            imp_vect(vect3, vect2, vect1, m);
            break;
        case 5:
            add_mat(mat, vect2, vect1, 4, 4);
            break;
        case 6:
            imp_mat(mat, 4, 4);
            break;
        }
    }
    while (op!=0);
}
int vali_num(int ri, int rf, const char* msge)
{
    int num;
    char cadena[30];
    do
    {
        printf("%s",msge);
        fflush(stdin);
        gets(cadena);
        num=atoi(cadena);
    }
    while (num<ri || num>rf);
    return num;
}
void add_vect(int vect1[], int m, int ri, int rf)
{
    int i;
    system("CLS");
    m=10;
    for(i=0;i<m;i++)
    {
        vect1[i]=vali_num(30,70,"Inserte un numero: ");
    }
    system("PAUSE");
}
void add_vect_rand(int vect2[], int m, int ri, int rf)
{
    int i, j, rango, num, band;
    system("CLS");
    ri=1;
    rf=20;
    m=10;
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
                if (num==vect2[j])
                {
                    band=true;
                }
                j++;
            }
        }
        while (band==true);
        vect2[i]=num;
    }
    system("PAUSE");
}
void add_vect3(int vect3[], int vect2[], int vect1[], int m)
{
    int i, j;
    system("CLS");
    j=0;
    m=20;
    for(i=0;i<m;i++)
    {
        if(i<10)
        {
            vect3[i]=vect1[i];
        }
        else
        {
            vect3[i]=vect2[j];
            j++;
        }
    }
    printf("Vector lleno\n");
    system("PAUSE");
}
void imp_vect(int vect3[], int vect2[], int vect1[], int m)
{
    int i;
    system("CLS");
    printf("Vector 1: \n");
    m=10;
    for(i=0;i<m;i++)
    {
        printf("POS [%d]: %d, ",i,vect1[i]);
    }
    printf("\nVector 2: \n");
    for(i=0;i<m;i++)
    {
        printf("POS [%d]: %d, ",i,vect2[i]);
    }
    printf("\nVector 3: \n");
    m=20;
    for(i=0;i<m;i++)
    {
        printf("POS [%d]: %d, ",i,vect3[i]);
    }
    system("PAUSE");
}
void add_mat(int mat[4][4], int vect2[], int vect1[], int m, int n)
{
    int i, j;
    system("CLS");
    m=4;
    n=4;
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            if(i%2==0)
            {
                mat[i][j] = vect1[i] + vect2[j];
            }
            else
            {
                mat[i][j] = vect1[j] + vect2[i];
            }
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