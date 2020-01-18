#include "../inc/path.h"

void mx_error_printstr(const char *s) {
    int i;

    for(i = 0; i < mx_strlen(s); i++) {
        write(2, &s[i], 1);
    }
}
