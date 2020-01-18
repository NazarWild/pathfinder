#include "../inc/path.h"

bool mx_error_check_incorrect_kol_islands(char **arr, int kol_graphs) {
	int kol_of_isl_danoe = mx_path_atoi(arr[0]);

	if (arr[1] == NULL) {
    	mx_error_printstr("error: line ");
    	mx_error_printint(1);
    	mx_error_printstr(" is not valid\n");		 
        return false;
    }
    if (kol_of_isl_danoe != kol_graphs) {
        mx_error_printstr("error: invalid number of islands\n"); 
        return false;
    }
    return true;
}
