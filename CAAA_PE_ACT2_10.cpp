#include<stdio.h>
#include<stdlib.h>
int main()
{
    //Carlos Alvarez 366182
    //25 Agosto 2023
    //Calcular el salario
    //CAAA_PE_ACT2_10
    float sh, sn, se, st;
  int horas, jn;
  printf("Ingrese las horas semanales trabajadas: ");
  scanf("%d",&horas);
  printf("Ingrese el salario por hora: ");
  scanf("%f",&sh);
  jn=40;
  if (horas > jn)
    if (horas > jn + 9)
    {
      sn = horas * sh;
      se = sh * 3;
      st = sn + se;
    }
    else
    {
      sn = horas * sh;
      se = sh * 2;
      st = sn + se;
    }
  else
  {
    sn = horas*sh;
    st = sn;
    se = 0;
  }
  printf("Salario por hora: %f\n", sh);
  printf("Horas trabajadas: %d\n", horas);
  printf("Salario normal: %f\n", sn);
  printf("Salario extra: %f\n", se);
  printf("Salario total: %f", st);
  return 0;
}