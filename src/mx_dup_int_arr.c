#include "../inc/path.h"

void mx_dup_int_arr(int *s, int *matrix, int length) {
    for (int i = 0; i < length; i++) {
        s[i] = matrix[i];
    } 
}
