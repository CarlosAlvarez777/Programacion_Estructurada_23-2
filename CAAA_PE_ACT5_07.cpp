#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define CADENA 100
void zodiaco(void);

main()
{
    //Carlos Alvarez 366182
    //08 Septiembre 2023
    //Funcion para calcular el signo zodiacal
    //CAAA_PE_ACT5_07
    zodiaco();
    return 0;
}
void zodiaco(void)
{
    system("CLS");
    int mes_nacimiento, dia_nacimiento;
    char signo[CADENA]="";
    printf("Ingresa tu mes de nacimiento [1-12]: ");
    scanf("%d", &mes_nacimiento);
    printf("Ingresa tu dia de nacimiento [1-31]: ");
    scanf("%d", &dia_nacimiento);
    switch (mes_nacimiento)
    {
    case 1:
        if (dia_nacimiento <= 20)
        {

            strcpy(signo, "Capricornio");
        }
        else
        {
            strcpy(signo, "Acuario");
        }
        break;
    case 2:
        if (dia_nacimiento <= 18)
        {
            strcpy(signo, "Acuario");
        }
        else
        {
            strcpy(signo, "Piscis");
        }
        break;
    case 3:
        if (dia_nacimiento <= 20)
        {
            strcpy(signo, "Piscis");
        }
        else
        {
            strcpy(signo, "Aries");
        }
        break;
    case 4:
        if (dia_nacimiento <= 20)
        {
            strcpy(signo, "Aries");
        }
        else
        {
            strcpy(signo, "Tauro");
        }
        break;
    case 5:
        if (dia_nacimiento <= 21)
        {
            strcpy(signo, "Tauro");
        }
        else
        {
            strcpy(signo, "Geminis");
        }
        break;
    case 6:
        if (dia_nacimiento <= 21)
        {
            strcpy(signo, "Geminis");
        }
        else
        {
            strcpy(signo, "Cancer");
        }
        break;
    case 7:
        if (dia_nacimiento <= 22)
        {
            strcpy(signo, "Cancer");
        }
        else
        {
            strcpy(signo, "Leo");
        }
        break;
    case 8:
        if (dia_nacimiento <= 23)
        {
            strcpy(signo, "Leo");
        }
        else
        {
            strcpy(signo, "Virgo");
        }
        break;
    case 9:
        if (dia_nacimiento <= 23)
        {
            strcpy(signo, "Virgo");
        }
        else
        {
            strcpy(signo, "Libra");
        }
        break;
    case 10:
        if (dia_nacimiento <= 23)
        {
            strcpy(signo, "Libra");
        }
        else
        {
            strcpy(signo, "Escorpio");
        }
        break;
    case 11:
        if (dia_nacimiento <= 22)
        {
            strcpy(signo, "Escorpio");
        }
        else
        {
            strcpy(signo, "Sagitario");
        }
        break;
    case 12:
        if (dia_nacimiento <= 21)
        {
            strcpy(signo, "Sagitario");
        }
        else
        {
            strcpy(signo, "Capricornio");
        }
        break;
    }
    printf("\nEl signo zodiacal es: %s\n", signo);
    printf("Tipico de %s", signo);
}