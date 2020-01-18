#include "../inc/path.h"

int mx_path_atoi(char *str) {
    if(!str)
        return 0;
    int rez = 0;
    int size_of_str = 0;
    int mult = 1;

    size_of_str = mx_strlen(str);
    for (int i = 0; i < size_of_str - 1; i++) {
        mult = mult * 10;
    }
    for (int i = 0; i < size_of_str; i++) {
        rez = rez + (str[i] - 48) * mult;
        mult = mult / 10;

    }
    return rez;
}
