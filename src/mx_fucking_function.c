#include "../inc/path.h"

static int **copy_s(int **s, int length, int m) {
    int i;
    int j;
    int **s_copy = NULL;

    s_copy = (int **) malloc (sizeof(int *) * 3);
    for (i = 0; i < 3; i++) {
        s_copy[i] = (int *) malloc (sizeof(int) * length);
        for (j = 0; j < length; j++) {
            s_copy[i][j] = s[i][j];
        }
    }
    s_copy[2][j] = m;
    s_copy[1][m] = 1;
    return s_copy;
}

static void mx_free_s_copy(int **s_copy) {
    free(s_copy[0]);
    free(s_copy[1]);
    free(s_copy[2]);
    free(s_copy);
}

static void mx_part_2_for_rec(int **matrix, int **s, int *len, int **path) {
    int **s_copy = NULL;
    int m = len[4];

    s_copy = copy_s(s, len[0], m);
    mx_fucking_function(matrix, s_copy, len, path);
    mx_free_s_copy(s_copy);
}

void mx_fucking_function(int **matrix, int **s, int *len, int **path) {
    int m = 0;
    int j;

    while (mx_check_on_trig(s, len[0]) != false) {
        m = mx_get_index_of_min(len[0], s);
        for (j = 0; j < len[0]; j++) {
            if (s[0][j] > matrix[m][j] + s[0][m] && m < len[0]
                && matrix[m][j] != MAX_INT && s[0][m] != MAX_INT) {
                s[0][j] = matrix[m][j] + s[0][m];
                s[2][j] = m;
            }
            else if (s[0][j] == matrix[m][j] + s[0][m] && m < len[0]
                && matrix[m][j] != MAX_INT && s[0][m] != MAX_INT) {
                len[4] = m;
                mx_part_2_for_rec(matrix, s, len, path);
            }
        }
        s[1][m] = 1;
    }
    mx_func_for_reconstruct_path(s, len, path);
}
