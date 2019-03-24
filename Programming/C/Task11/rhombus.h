//
// Created by nikita on 18.03.2019.
//

#ifndef TASK11_RHOMBUS_H
#define TASK11_RHOMBUS_H
#include "vector.h"
#include <stdio.h>

struct Rhombus{
    struct Vector points[4];
    float height;
};

void readCoordinates(struct Rhombus *rhombus);
float getRhombusPerimeter(struct Rhombus rhombus);
void createEmptyRhombus(struct Rhombus *rhombus);
float getRhombusArea(struct Rhombus rhombus);
#endif // TASK11_RHOMBUS_H
