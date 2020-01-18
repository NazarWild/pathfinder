#include "../inc/path.h"

int **mx_create_matrix(int length) {
    int **matrix = NULL;
    int row;
    int col;

    matrix = (int **) malloc (sizeof(int*) * length);
    for (row = 0; row < length; row++) {
        matrix[row] = (int *) malloc (sizeof(int) * length);
        for (col = 0; col < length; col++) {
            matrix[row][col] = MAX_INT;
        }
    }
    return matrix;
}
