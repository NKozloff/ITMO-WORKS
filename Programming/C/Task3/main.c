#include <stdio.h>
// Variant 5

void ShowNumberRepresentation(const int number, int base){
    switch(base)
    {
        case 8: // восьмеричное число
            printf("Octal number: %o \n", number & 0xF);
            break;
        case 16: // 16
            printf("Hexadecimal number: %x \n", number);
            break;
        default:  // 10
            printf("Decimal number: %d \n", number);
            break;
    }
}

int main() {
    // Task1
    printf("First Task\n");
    int firstnumber;
    int secondnumber;
    printf("Entered a number: ");
    // or "%u"
    scanf("%i", &firstnumber );

    printf("Second Task\n");
    // Task2
    ShowNumberRepresentation(firstnumber, 16);
    printf("Third Task\n");
    // Task3
    ShowNumberRepresentation(firstnumber, 8);

    ShowNumberRepresentation(firstnumber >> 1, 8);
    printf("Fourth Task\n");
    // Task4
    ShowNumberRepresentation(firstnumber, 8);
    ShowNumberRepresentation(~firstnumber, 8);
    printf("Fifth Task\n");
    //Task5
    printf("Enter a second number (octal): ");
    scanf("%o", &secondnumber);
    ShowNumberRepresentation(firstnumber ^ secondnumber, 8);

    return 0;
}