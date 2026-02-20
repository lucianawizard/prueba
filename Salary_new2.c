#include <stdio.h>

/*Cálculo de los salarios mensuales del empleado de una
empresa, sabiendo que esto se calcula en base a las horas
semanales trabajadas y de acuerdo a un precio especificado
por horas. Si se pasa de cuarenta horas semanales, las horas
extraordinarias se pagarán a razón de 1.5 veces la hora normal*/

int main() {

  char NOMBRE[50];
  
  printf("Escriba su nombre: ");
  scanf("%c", NOMBRE);

  int HORAS;

  printf("Escriba sus horas trabajadas: ");
  scanf("%d", &HORAS);

  int PRECIO_HORA =20;
  double SALARIO;
  double SALARIO_EXTRA;

  if (HORAS <= 40) {
    double SALARIO = PRECIO_HORA * HORAS;

      printf("El salario de: %s\n", NOMBRE);
      printf("es: %lf\n", SALARIO);

  } else {
    double SALARIO_EXTRA = PRECIO_HORA * 40 + (HORAS - 40) * 1.5;

    printf("El salario de: %s\n", (NOMBRE));
    printf("es: %lf\n", (SALARIO_EXTRA));
  }

  return 0;
}