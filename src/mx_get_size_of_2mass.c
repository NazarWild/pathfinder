#include "../inc/path.h"

int mx_get_size_of_2mass(char **ch_arr) {
    int size = 0;

    while (ch_arr[size]) {
        size++;
    }
    return size;
}
