#include <stdio.h>
const int MAX_ROWS = 2;
const int MAX_COLUMNS = 2;

void showArray(const int *array, const int arrayLength) {
    printf("Array values: ");

    for (int i = 0; i < arrayLength; ++i) {
        printf("%d ", array[i]);
    }

    printf("\n");
}

void showMatrix(int matrix[MAX_ROWS][MAX_COLUMNS]) {
    for (int i = 0; i < MAX_ROWS; i++) {
        showArray(matrix[i], MAX_COLUMNS);
    }
    printf("\n");
}

/**
 * Calculate product of two matrix size of MAX_ROWS x MAX_COLUMNS
 */
void matrixProduct(int matrixLeft[MAX_ROWS][MAX_COLUMNS],
                   int matrixRight[MAX_ROWS][MAX_COLUMNS],
                   int matrixOut[MAX_ROWS][MAX_COLUMNS]) {
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 2; col++) {
            for (int i = 0; i < 2; i++) {
                matrixOut[row][col] += matrixLeft[row][i] * matrixRight[i][col];
            }
        }
    }
}

int main() {
    // Task 1
    int array[9] = {99, 88, 77, 66, 55, 44, 33, 22, 11};
    const int arrayLength = sizeof(array) / sizeof(int);
    printf("Defined array: ");
    showArray(array, arrayLength);

    // Task 2
    int matrixA[MAX_ROWS][MAX_COLUMNS] = {{1,  1},{1, 4}
    };

    int matrixB[MAX_ROWS][MAX_COLUMNS] = {{1, 2},{4, 1}
    };

    int matrixC[MAX_ROWS][MAX_COLUMNS] = {{0, 0},{0, 0}
    };

    matrixProduct(matrixA, matrixB, matrixC);
    printf("\nProducted matrix: \n");
    showMatrix(matrixC);

    return 0;
}