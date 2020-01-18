#include "../inc/path.h"

int mx_kol_of_rows(char *ready_out) {
    int len = 0;
    int i = 0;

    while(i < mx_strlen(ready_out)) {
        if(ready_out[i] == '\n')
            len++;
        i++;
    }
    return len;
}
