#include "../inc/path.h"

static bool mx_isdigit(int c) {
    if (c >= 48 && c <= 57) {
        return true;
    }
    else { 
        return false;
    }
}

bool mx_error_check_3(char **arr) {
    int i = 0;

    while (i < mx_strlen(arr[0])) {
        if (!mx_isdigit(arr[0][i])) {
            mx_error_printstr("error: line "); 
            mx_error_printstr("1"); 
            mx_error_printstr(" is not valid\n");
            return false;
        }
        i++;
    }
    return true;
}
