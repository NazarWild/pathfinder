#include "../inc/path.h"

static bool mx_isdigit(int c) {
    if (c >= 48 && c <= 57) {
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

bool mx_error_check_5(char **arr, int length) {
    int i;
    int j = 0;
    int len = (length - 1) * 3;
    int index = 2;

    for (i = 3; i <= len; i += 3) {
        while (j < mx_strlen(arr[i])) {
            if (!mx_isdigit(arr[i][j])) {
                out(index);
                return false;
            }
            j++;
        }
        index++;
        j = 0;
    }
    return true;
}
