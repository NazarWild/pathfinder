#include "../inc/path.h"

void mx_copy_rez_matrix(int **int_matrix, int length, int **copy_matrix) {
    int i = 0;
    int j = 0;
    
    for (i = 0; i < length; i++) {
        for (j = 0; i < length; i++) {
            copy_matrix[i][j] = int_matrix[i][j];
        }   
    }
}
