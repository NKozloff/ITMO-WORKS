#include <stdio.h>
#include <math.h>

// Функция, которая рассчитывает длину отрезка
float LengthOfLine(float x1, float x2, float y1, float y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Функция, которая отображает состояние прибора
char *FormatState(int state) {
    return state == 1 ? "On" : "Off";
}

enum MusicianStyle {
    CLASSIC,
    POP,
    ROCK,
    RAP,
    NEW_AGE,
    ELECTRONIC
};

// Описание отрезка прямой
struct LineSegment {
    double point1_x; // Начало отрезка(точка)
    double point1_y;
    double point2_x; // Конец отрезка(точка)
    double point2_y;
    int thickness; // Толщина отрезка
    float length;
    int color;
};

union ADSL {
    unsigned short state;
    struct {
        unsigned short DSL :1;
        unsigned short PPP :1;
        unsigned short Link :1;
    } bitState;
} ADSL;

int main() {
    //First Task
    printf("ROCK is %d\n", ROCK);

    //Second Task
    struct LineSegment lineSegment = {1, 4, 2, 6, 20, 5}; // Инициализация отрезка прямой

    // Вычисляем длину отрезка, выводим
    printf("Calculated length: %f\n",
           LengthOfLine(lineSegment.point1_x, lineSegment.point2_x, lineSegment.point1_y, lineSegment.point2_y));

    // Third Task
    printf("Enter an ADSL state (hexadecimal): ");
    scanf("%x", &ADSL.state);

    // Состояние элементов прибора
    printf("DSL is %s \n", FormatState(ADSL.bitState.DSL));
    printf("PPP is %s \n", FormatState(ADSL.bitState.PPP));
    printf("Link is %s \n", FormatState(ADSL.bitState.Link));

    return 0;
}