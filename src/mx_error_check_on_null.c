#include "../inc/path.h"

static void out(int index) {
    mx_error_printstr("error: line ");
    mx_error_printint(index);
    mx_error_printstr(" is not valid\n");
}

bool mx_error_check_on_null(char **arr, int length) {
    int i;
    int j = 0;
    int len = (length - 1) * 3;
    int index = 2;

    for (i = 3; i <= len; i += 3) {
        if (arr[i][j] == 48) {
            out(index);
            return false;
        }        
        index++;
        j = 0;
    }
    return true;
}
