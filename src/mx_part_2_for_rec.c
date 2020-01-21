#include "../inc/path.h"

static int **copy_s(int **s, int *len) {
    int i;
    int j;
    int **s_copy = NULL;

    s_copy = (int **) malloc (sizeof(int *) * 3);
    for (i = 0; i < 3; i++) {
        s_copy[i] = (int *) malloc (sizeof(int) * len[0]);
        for (j = 0; j < len[0]; j++) {
            s_copy[i][j] = s[i][j];
        }
    }
    return s_copy;
}

static void mx_free_s_copy(int **s_copy) {
    free(s_copy[0]);
    free(s_copy[1]);
    free(s_copy[2]);
    free(s_copy);
}

void mx_part_2_for_rec(int **matrix, int **s, int *len, int **path) {
    int **s_copy = NULL;
    int m = len[4];

    s_copy = copy_s(s, len);
    s_copy[2][len[5]] = m;
    mx_fucking_function(matrix, s_copy, len, path);
    mx_free_s_copy(s_copy);
}
