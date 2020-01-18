#include "../inc/path.h"
//создание массива строк со всем , разделяя пробелами
char **mx_new_arr(const char *file) {
    char *ready_out = mx_file_to_str(file);
    char *new_file_str = mx_change_signs_to_32(ready_out);
    char **out_without_n = mx_strsplit(new_file_str,32);

    if (malloc_size(ready_out))
    	free(ready_out);
    if (malloc_size(new_file_str))
    	free(new_file_str);
    return out_without_n;
}
