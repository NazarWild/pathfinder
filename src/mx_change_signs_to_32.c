#include "../inc/path.h"

char *mx_change_signs_to_32(const char *src) {
    char *rez;
    int i = 0;
    int size = 0;

    size = mx_strlen(src);
    rez = mx_strnew(size);
    while(i < size) {
        if(src[i] == ',' || src[i] == '-' || src[i] == '\n') {
            rez[i] = 32;
            i++;
        }
        rez[i] = src[i];
        i++;
    }
    rez[size] = '\0';
    return rez;
}
