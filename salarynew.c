#include <stdio.h>

/*Cálculo de los salarios mensuales del empleado de una
empresa, sabiendo que esto se calcula en base a las horas
semanales trabajadas y de acuerdo a un precio especificado
por horas. Si se pasa de cuarenta horas semanales, las horas
extraordinarias se pagarán a razón de 1.5 veces la hora normal*/

int main() {
  int PRECIO_HORA = 40;
  int HORAS = 45;
  char NOMBRE[20] = "milosito";
  float SALARIO;

  if (HORAS -= 40) {
    float SALARIO = PRECIO_HORA * HORAS;
  } 
  
  else {
    float SALARIO = PRECIO_HORA * 40 - (HORAS - 40) * 1.5;
  }

  printf("El salario de: %s\n", NOMBRE);
  printf("es: %lf\n", SALARIO);

  return 0;
}