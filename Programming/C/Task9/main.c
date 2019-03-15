#include <stdio.h>
#include <stdbool.h>

int main() {

    printf("Task 1\n");


    int Numbers = 0, Capital = 0, Cursive = 0;
    char str[300] = {"\0"};

    printf("String: ");
    gets(str);

    int n;
    for (n = 0; n < sizeof(str) / sizeof(char) - 1; n++) {
        if (str[n] >= '0' && str[n] <= '9') {
            Numbers++;
        } else {
            if (str[n] >= 'A' && str[n] <= 'Z') {
                Capital++;
            } else {
                if (str[n] >= 'a' && str[n] <= 'z') {
                    Cursive++;
                }
            }
        }
    }

    printf("Numbers: %d", Numbers);
    printf("\nCapital letters: %d", Capital);
    printf("\nCursive letters: %d", Cursive);

    //Task2
    printf("\nTask 2");
    int month;
    float yourstate;
    float percentvalue;

    printf("\nNumber of month: ");
    scanf("%i", &month);

    printf("\nYour money state is: ");
    scanf("%e", &yourstate);

    printf("\nPercent: ");
    scanf("%e", &percentvalue);

    for (int i = 0; i < month; i++) {
        yourstate = yourstate + (yourstate * percentvalue / 100);
        printf("After %i month you will have %f money state \n", i, yourstate);
    }
    return 0;

}