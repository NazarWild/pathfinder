#include "../inc/path.h"

static void out(int index) {
    mx_error_printstr("error: line ");
    mx_error_printint(index + 1);
    mx_error_printstr(" is not valid\n");
}

bool mx_error_check_6(char *mx) {
    int i;
    int index = 1;

    for (i = 3; i <= mx_strlen(mx); i += 6) {
        if (mx[i] != '-' || mx[i + 2] != ',') {
            out(index);
            return false;
        }
        index++;    
    }
    return false;
}
