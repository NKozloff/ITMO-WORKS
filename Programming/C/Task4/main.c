#include <stdio.h>

const int LowRange = -3;
const int HighRange = 6;

int CheckRange(int number, int LowestRange, int HighestRange){
    return ( number >= LowestRange) && (number <= HighestRange);
}

int main() {
    int numberInput;
    printf("Enter a number: ");
    scanf("%i", &numberInput);

    CheckRange(numberInput, LowRange, HighRange)
    ? printf("Number in the range")
    : printf("Number is out of the range");

    return 0;
}