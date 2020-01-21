#include "../inc/path.h"

static void mx_bilshe(int **matrix, int **s, int *len, int m) {
    for (len[5] = 0; len[5] < len[0]; len[5]++) {
        if (s[0][len[5]] > matrix[m][len[5]] + s[0][m] && m < len[0]
            && matrix[m][len[5]] != MAX_INT && s[0][m] != MAX_INT) {
            s[0][len[5]] = matrix[m][len[5]] + s[0][m];
            s[2][len[5]] = m;
        }
    }
}

static void mx_rec(int **matrix, int **s, int *len, int **path) {
    int m = len[4];

    for (len[5] = 0; len[5] < len[0]; len[5]++) {
        if (s[0][len[5]] == matrix[m][len[5]] + s[0][m] && m < len[0]
            && matrix[m][len[5]] != MAX_INT && s[0][m] != MAX_INT) {
            mx_part_2_for_rec(matrix, s, len, path);
        }
    }
}

void mx_fucking_function(int **matrix, int **s, int *len, int **path) {
    int m = 0;

    while (mx_check_on_trig(s, len[0]) != false) {
        m = mx_get_index_of_min(len[0], s);
        s[1][m] = 1;
        len[4] = m;
        mx_bilshe(matrix, s, len, m);
        mx_rec(matrix, s, len, path);
    }
    mx_func_for_reconstruct_path(s, len, path);
}
