#include "../inc/path.h"

bool mx_check_on_trig(int **s, int length) {
    bool rez = false;
    int i = 0;
    int check = 0;

    while (i < length) {
        if(s[1][i] == 1)
            check++;
        i++;
    }
    if (check < length)
        rez = true;
    return rez;
}
