#include <stdio.h>
#include <string.h>

const int size = 1000;

int main() {
    //First Task (5)
    char source[size], destination[size];

    printf("Input a string:");
    gets(source);

    strcpy(destination, source);

    printf("Source string: %s", source);
    printf("\nDestination string: %s", destination);
    //Second Task (7)
    char a[size];
    int length;

    printf("\nEnter a string to calculate it's length");
    gets(a);

    length = strlen(a);

    printf("Length of the string = %d\n", length);

    //Third Task (9)
    char str[size], ch;
    int i, index;
    index = -1;

    printf("Enter any string:");
    gets(str);

    printf("Enter the character that you want to search for: ");
    scanf("%c", &ch);

    for (i = 0; i <= strlen(str); i++) {
        if (str[i] == ch) {
            index = i;
        }
    }
    if (index == -1) {
        printf("We haven't found the the search element '%c\n' ", ch);
    } else {
        printf("The last occurrence of the search element '%c'' at position %d \n", ch, index + 1);
    }

    //Forth Task (11)
    char s1[size];
    char s2[size];
    printf("Input a string:");
    gets(s1);
    printf("\nInput a segment:");
    gets(s2);
    printf("Length of segment:%d", strspn(s1, s2));

    //Fifth Task (13)
    // Массив со строкой для поиска
    char string1[size];
    // Набор символов, которые должны входить в искомый сегмент
    char string2[size];
    printf("\nFirst string:");
    scanf("%s", string1);
    printf("\nSecond string: ");
    scanf("%s", string2);
    // Переменная, в которую будут заноситься начальные адреса частей строки string1
    char *c;
    printf("Split result:\n");
    // Выделение первой части строки
    c = strtok(string1, string2);
    // Выделение последующих частей
    while (c != NULL) {
        // Вывод очередной выделенной части
        printf("%s\n", c);
        // Выделение очередной части строки
        c = strtok(NULL, string2);
    }

    return 0;
}



