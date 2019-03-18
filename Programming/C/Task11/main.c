#include <stdio.h>
#include "rhombus.h"

int main() {
  struct Rhombus rhombus;
  createEmptyRhombus(&rhombus);
  readCoordinates(&rhombus);

  printf("\nPerimeter of rhombus is %f", getRhombusPerimeter(rhombus));

  return 0;
}