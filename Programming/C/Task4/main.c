#include <stdio.h>

const int LowRange = -3;
const int HighRange = 6;
const int Bit_Position = 1;

int CheckRange(int number, int LowestRange, int HighestRange) {
    return (number >= LowestRange) && (number <= HighestRange);
}

int BitValue(int number, int position) {
    return (number >> position) & 1u;

}

int main() {

    // 1 Task
    int numberInput;
    printf("Enter a number: \n");
    scanf("%i", &numberInput);

    CheckRange(numberInput, LowRange, HighRange)
    ? printf("Number in the range \n")
    : printf("Number is out of the range \n");

    // 2 Task
    printf("Enter a number: \n");
    scanf("%i", &numberInput);
    printf("Value of a bit at %i position is %i", Bit_Position, BitValue(numberInput, Bit_Position));

    return 0;
}