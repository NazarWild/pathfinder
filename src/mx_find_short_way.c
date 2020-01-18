#include "../inc/path.h"

static void part_of(int **matrix, int **s, int *len, int **path) {
    int i = 0;

    mx_dup_int_arr(s[0], matrix[len[1]], len[0]);
    mx_fucking_function(matrix, s, len, path);
    s[0][len[1]] = 0;
    s[2][len[1]] = -1;
    for(i = 0; i < len[0]; i++) {
        s[2][i] = len[1] + 1;
        s[1][i] = MAX_INT;
    }
}

int mx_find_short_way(int **matrix, int **s, int length, int **path) {
    int row = 0;
    int *length_row = (int *) malloc (sizeof(int) * 5);
    int ret = 0;

    length_row[0] = length;
    length_row[3] = 0;    
    for (row = 0; row < length; row++) {
        length_row[1] = row;
        s[2][row] = row;
        s[1][row] = 1;
        part_of(matrix, s, length_row, path);
    }
    ret = length_row[3];
    free(length_row);
    return ret;
}
