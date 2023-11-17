#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct _alum{
    int status;
    int matricula;
    char apPat[30];
    char apMat[30];
    char nombre[50];
    int edad;
    char sexo;
} Talum;

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
void burbuja(int vector[], int m)
{
    int i, j, temp;
    for(i=0;i<m-1;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(vector[j]<vector[i])
            {
                temp=vector[i];
                vector[i]=vector[j];
                vector[j]=temp;
            }
        }
    }
}
void burbuja_reg(Talum vector[], int m) {
    int i, j;
    Talum temp;

    for (i = 0; i < m - 1; i++) {
        for (j = i + 1; j < m; j++)
        {
            if (vector[j].matricula < vector[i].matricula)
            {
                temp = vector[i];
                vector[i] = vector[j];
                vector[j] = temp;
            }
        }
    }
}