#include "../inc/path.h"

static bool mx_is_rigth_symbol(int c) {
    if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) 
    || (c >= 97 && c <= 122) || c == '-' || c == ',' || c == '\n'){
        return true;
    }
    else { 
        return false;
    }
}

static void out(int index) {
    mx_error_printstr("error: line ");
    mx_error_printint(index);
    mx_error_printstr(" is not valid\n");
}

bool mx_error_check_incorrect_symbols(char *arr) {
    int j = 0;
    int index = 1;
    int len = mx_strlen(arr);

    while (j < mx_strlen(arr)) {
        if (!mx_is_rigth_symbol(arr[j])) {
            out(index);
            return false;
        }
        if(arr[j] == '\n')
        	index++;
        j++;
    }
    if (arr[len - 1] != '\n') {
        out(index);
        return false;
    }
    return true;
}
