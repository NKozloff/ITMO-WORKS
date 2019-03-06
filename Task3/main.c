#include <stdio.h>
int ShowNumberRepresentation( int number, int base){

    switch(base)
    {
        case 8:
            printf("Octal number: %i \n", number);
            break;
        case 16:
            printf("Hexademical number: %x \n", number);
            break;
        default:
            printf("Decimal number: %d \n", number);
            break;
    }
}




int main() {
    // Task1
    int number;
    printf("Entered a number: ");
    // or "%u"
    scanf("%i", &number );

    // Task2
    ShowNumberRepresentation(number, 16);

    // Task3
    ShowNumberRepresentation(number, 8);
    ShowNumberRepresentation(number >>1,8);

    // Task4
    ShowNumberRepresentation(number, 8);
    ShowNumberRepresentation(~number, 8);





    return 0;
}