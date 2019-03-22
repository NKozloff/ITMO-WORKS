//
// Created by nikita on 18.03.2019.
//

#ifndef TEMPORARY_RHOMBUS_H
#define TEMPORARY_RHOMBUS_H
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
#endif //TEMPORARY_RHOMBUS_H
