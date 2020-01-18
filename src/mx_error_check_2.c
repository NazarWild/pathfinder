#include "../inc/path.h"

bool mx_error_check_2(const char *argv) {
    char *str = mx_file_to_str(argv);

    if (str == NULL) {
        mx_error_printstr("error: file "); 
        mx_error_printstr(argv); 
        mx_error_printstr(" does not exist\n");
        return false;
    } 
    else if (*str == (char)NULL) {
        mx_error_printstr("error: file "); 
        mx_error_printstr(argv); 
        mx_error_printstr(" is empty\n");
        return false;
    }
    if (malloc_size(str))
        free(str);
    return true;
}
