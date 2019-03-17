#include <stdio.h>
#include <math.h>

const int size = 100;

// Наибольший общий делитель
int NOD(int a, int b) {
    int c;
    while (a) {
        c = a;
        a = b % a;
        b = c;
    }
    return b;
};

// Наименьшее общее кратное
int NOK(int a, int b) {
    return a * (b / NOD(a, b));
}

// Сумма цифр натурального числа
int SumOfDigits(int number) {
    if (number < 10) {
        return number;
    } else {
        return number % 10 + SumOfDigits(number / 10);
    }
}

/*Функция, которая вводит с клавиатуры строку, состоящую из латинских букв, пробелов и знаков препинания:
'.', ',', '!', '?', ':', ';' и выводит на экран данную строку, в которой: если между двумя словами
нет знака препинания, то они разделяются ровно одним пробелом, если знак препинания присутствует,
то перед ним пробела не ставится, а после него - ставится, если подряд идут несколько
знаков препинания, они могут разделяться 0 или 1 пробелами. */
void MinusExtraSpaces(char str[size]) {
    int i, noword;

    printf("\nEnter a string: ");
    gets(str);

    i = 0;
    noword = 1;

    /* Проходим все символы */
    while (str[i]) {
        /* Пробел - разделитель слов, пока пробел не выводим */
        if (str[i] == ' ')
            noword = 1;
            /* Знак препинания - резделитель, выводим его */
        else if ((str[i] == '.') || (str[i] == ',') || (str[i] == '!') ||
                 (str[i] == '?') || (str[i] == ':') || (str[i] == ';')) {
            printf("%c", str[i]);
            noword = 1;
        }
            /* Если начинается новое слово, и это не первое слово -
             * выводим перед ним пробел */
        else {
            if (noword && i)
                printf(" ");
            printf("%c", str[i]);
            noword = 0;
        }
        i++;
    }
}

int main() {
    int Number_1, Number_2;
    char string[size];

    // Task2
    MinusExtraSpaces(string);

    // Task1
    printf("\nEnter first number: ");
    scanf("%d", &Number_1);

    printf("\nEnter second number: ");
    scanf("%d", &Number_2);

    printf("\nHighest common factor: %d", NOD(Number_1, Number_2));
    printf("\nLeast common multiple: %d", NOK(Number_1, Number_2));


    return 0;
}