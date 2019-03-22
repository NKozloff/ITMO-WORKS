#include <stdio.h>
#include "rhombus.h"

int main() {
  struct Rhombus rhombus;
  createEmptyRhombus(&rhombus);
  readCoordinates(&rhombus);

  printf("\nPerimeter of rhombus is %f", getRhombusPerimeter(rhombus));

  printf("\nEntered a value of the height: ");
  scanf("%f", &rhombus.height);
  printf("\nArea of rhombus is %f", getRhombusArea(rhombus));

  return 0;
}