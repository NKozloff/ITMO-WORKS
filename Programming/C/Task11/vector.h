//
// Created by nikita on 18.03.2019.
//

#ifndef TEMPORARY_VECTOR_H
#define TEMPORARY_VECTOR_H
#include <stdio.h>
#include <math.h>

struct Vector{
    int x;
    int y;
    int z;
};

void createVector(struct Vector *targetVector, struct Vector startPoint, struct Vector endPoint);
void printVector(struct Vector coordinate);
void readVector(struct Vector *coordinate);
float getVectorLength(struct Vector vector);


#endif //TEMPORARY_VECTOR_H
