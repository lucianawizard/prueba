#include <stdio.h>
#include <string>
#include <iostream>

/*Cálculo de los salarios mensuales del empleado de una
empresa, sabiendo que esto se calcula en base a las horas
semanales trabajadas y de acuerdo a un precio especificado
por horas. Si se pasa de cuarenta horas semanales, las horas
extraordinarias se pagarán a razón de 1.5 veces la hora normal*/

int main() {
  int PRECIO_HORA = 40;
  int HORAS = 45;
  std::string NOMBRE = "milosito";

  if (HORAS <= 40) {
    double SALARIO = PRECIO_HORA * HORAS;
  } 
  
  else {
    double SALARIO = PRECIO_HORA * 40 - (HORAS - 40) * 1.5;
  }

  std::cout << "NOMBRE: " "tiene un salario de" "SALARIO: ";

  return 0;
}