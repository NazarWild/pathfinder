#include "../inc/path.h"

static bool mx_isalpha(int c) {
    if ((c >= 65 && c <= 90) 
        || (c >= 97 && c <= 122)){
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

bool mx_error_check(char **arr, int length) {
    int i;
    int j = 0;
    int len = (length - 1) * 3;
    int index = 2;

    for (i = 1; i <= len; i++) {
        if (i % 3 != 0) {
            while (j < mx_strlen(arr[i])) {
                if (!mx_isalpha(arr[i][j])) {
                    out(index / 2);
                    return false;
                }
                j++;
            }
            index++;
            j = 0;
        }
    }
    return true;
}
