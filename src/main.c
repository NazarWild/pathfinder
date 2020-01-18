#include "../inc/path.h"

int main(int argc, char const *argv[]) {
    if (!mx_error_check_1(argc)
    || !mx_error_check_2(argv[1])) {
        return 0;
    }
    char *ready_out = mx_file_to_str(argv[1]);
    if (!mx_error_check_incorrect_symbols(ready_out))
        return 0;
    char **ready_arr = mx_new_arr(argv[1]);
    if (!mx_part_of_main_1(ready_out, ready_arr))
        return 0;
    int kol_graphs = mx_kol_of_islands(ready_arr);    
    if (!mx_error_check_incorrect_kol_islands(ready_arr, kol_graphs))
       return 0;
    int **int_matrix = mx_create_matrix(kol_graphs);
    int **s = mx_create_s(kol_graphs);
    char **islands = mx_islands_in_mass_of_str(ready_arr);
    mx_create_rez_matrix(int_matrix, kol_graphs, ready_arr, islands);        
    mx_output(int_matrix, s, kol_graphs, islands);    
    mx_free_unused_memory_1(ready_out, ready_arr);
}
