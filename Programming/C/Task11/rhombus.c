//
// Created by nikita on 18.03.2019.
//
#include "rhombus.h"

void readCoordinates(struct Rhombus *rhombus){
    for(int number = 0; number < 4; number++){
        printf("Enter point coordinate [%d]: ", number + 1);
        readVector(&rhombus->points[number]);
    }
}

float getRhombusPerimeter(struct Rhombus rhombus){
    float perimeter = 0;

    for(int i=0; i<4; ++i){
        int startPointIndex = i;
        //если начальная точка последняя, ​​то подключаем ее к первой точке
        int endPointIndex = i == 3 ? 0 : i + 1;

        struct Vector line;
        createVector(
                &line,
                rhombus.points[startPointIndex],
                rhombus.points[endPointIndex]
                );
        perimeter += getVectorLength(line);
    }
    return perimeter;
}
float getRhombusArea(struct Rhombus rhombus){
    float area = 0;
    for(int i=0; i<4; ++i){
        int startPointIndex = i;
        int endPointIndex = i == 3 ? 0 : i + 1;

        struct Vector line;
        createVector(
                &line,
                rhombus.points[startPointIndex],
                rhombus.points[endPointIndex]
        );
       area += getVectorLength(line) * rhombus.height;
    }
    return area;
}

void createEmptyRhombus(struct Rhombus *rhombus){
    struct Rhombus newRhombus = {0, 0, 0, 0};
    *rhombus = newRhombus;
}