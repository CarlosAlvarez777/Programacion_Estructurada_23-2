#include "anthony.h"
#include<stdio.h>

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
void ordenar(int vect1[], int m)
{
    int i, j, temp;
    for(i=0;i<m-1;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(vect1[j]<vect1[i])
            {
                temp=vect1[i];
                vect1[i]=vect1[j];
                vect1[j]=temp;
            }
        }
    }
}