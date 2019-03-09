#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main() {

    // First Task
    char A[4] = {};
    char *p = A;
    *p = 'W';
    *(p + 1) = 'O';
    *(p + 2) = 'R';
    *(p + 3) = 'K';

    printf(" %c\n %c\n %c\n %c\n", *p, *(p + 1), *(p + 2), *(p + 3));

    // Second Task
    char *f; // Указатель на массив
    int i, size; // size - размер массива

    printf("Entered a size of array: ");
    scanf(" %d", &size);

    f = (char *) malloc(size * sizeof(char));
    //Заполнение массива
    for (i = 0; i < size; i++) {
        printf("f[%d]= ", i);
        scanf(" %c", &f[i]);
    }
    // Вывод в вид массива
    for (i = 0; i < size; i++) {
        printf("f[%d]=%c \n", i, f[i]);
    }

    free(f);

    return 0;
}