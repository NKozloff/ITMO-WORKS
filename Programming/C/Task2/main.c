#include <stdio.h>
#include <math.h>
// Variant 5
double DegreeToRadian(double degree){
    return degree* M_PI / 180;
}

double FirstFunction(double radian){
    return 1 - (pow(sin(2*radian), 2))/4 + cos(2*radian);
}

double SecondFunction(double radian) {
    return pow(cos(radian), 2) + pow(cos(radian), 4);
}

int main() {
    double degree, radian;

    printf("Entered the degree: ");
    scanf("%lf", &degree);

    radian = DegreeToRadian(degree);
    printf("Z1: %f\n", FirstFunction(radian));
    printf("Z2: %f \n", SecondFunction(radian) );

}