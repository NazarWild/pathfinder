#include "../inc/path.h"

int mx_get_index_of_min(int len, int **s) {
    int i = 0;
    int min = MAX_INT;
    int index = 0;

    for (i = 0; i < len; i++) {
        if (s[0][i] <= min && s[0][i] > 0 && s[1][i] != 1) {
            min = s[0][i];
            index = i;
        }
    }
    return index;
}
