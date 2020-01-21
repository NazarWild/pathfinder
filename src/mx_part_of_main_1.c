#include "../inc/path.h"

bool mx_part_of_main_1(char *ready_out, char **ready_arr) {
    int kol_of_rows = mx_kol_of_rows(ready_out);

    if (!mx_error_check(ready_arr, kol_of_rows)
    	|| !mx_error_check_3(ready_arr)
	    || !mx_error_check_4(ready_arr, kol_of_rows)
	    || !mx_error_check_5(ready_arr, kol_of_rows)
	    || !mx_error_check_on_null(ready_arr, kol_of_rows))
        return false;
    else
        return true;
}
