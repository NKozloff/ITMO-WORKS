#include <stdio.h>
// Variant 5
void InputIntNumber() {
    int intNumber;
    printf("Enter an Integer number: ");
    scanf("%i", &intNumber);
    printf("You entered: %i \n", intNumber);
}
void InputString() {
    char str[20];
    printf("Enter a string: ");
    gets(str);
    printf("You entered: %s \n", str);
}

int main() {
    InputString();
    InputIntNumber();

    return 0;
}