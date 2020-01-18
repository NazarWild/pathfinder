#include "../inc/path.h"

void mx_create_rez_matrix(int **int_arr, int len, char **ch_arr, char **isl) {
    int row;
    int col = 0;
    int size_of_ch_arr = mx_get_size_of_2mass(ch_arr);

    for (int i = 1; i < size_of_ch_arr; i = i + 3) {
        row = mx_get_index_of_island(ch_arr[i], len, isl);
        col = mx_get_index_of_island(ch_arr[i + 1], len, isl);
        int_arr[row][col] = mx_path_atoi(ch_arr[i + 2]);
        int_arr[col][row] = mx_path_atoi(ch_arr[i + 2]);
    }
}
