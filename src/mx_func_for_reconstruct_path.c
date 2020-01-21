#include "../inc/path.h"

static bool check_on_unique(int *glk, int **all, int len1, int *len) {
    bool check = true;
    int i;

    for (i = 0; i < len[3]; i++) {
        if (mx_int_strcmp(all[i], glk, len1, len) == 0)
            return false;
    }
    return check;
}

static void mx_copy(int *s, int *s_copy, int length) {
    int j;

    for (j = 0; j < length; j++) {
        s_copy[j] = s[j];
    }
}

static int *part1(int **s, int i, int *len, int *path) {
    int location = MAX_INT;
    int temp = i;
    int count_4_path = 0;
    int count = 3;

    path[0] = i;
    path[len[0] + count] = s[0][i];
    while(location != len[1]) {
        count_4_path++;
        location = s[2][temp];
        temp = location;
        path[count_4_path] = location;
        count++;
        path[len[0] + count] = s[0][location];
    }
    path[len[0] + 2] = count - 2;
    path[len[0] + 1] = count_4_path;
    return path;
}

void mx_func_for_reconstruct_path(int **s, int *len, int **path) {
	int i;
    int *copy = NULL;

    for(i = len[1] + 1; i < len[0]; i++) {
        copy = (int *) malloc (4 * len[0] * 2);
        part1(s, i, len, copy);
        if (path[0] != NULL) {
            if (check_on_unique(copy, path, copy[len[0] + 1], len)) {
                path[len[3]] = (int *) malloc (4 * len[0] * 2);
                mx_copy(copy, path[len[3]], len[0] * 2);
                len[3]++;
            }
        }
        else {
            path[len[3]] = (int *) malloc (4 * len[0] * 2);
            mx_copy(copy, path[len[3]], len[0] * 2);
            len[3]++;
        }
        free(copy);
    }
}
