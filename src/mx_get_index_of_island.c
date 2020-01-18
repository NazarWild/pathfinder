#include "../inc/path.h"

int mx_get_index_of_island(char *str, int length, char **islands) {
    int index = 0;

    while (index < length) {
        if (mx_strcmp(str,islands[index]) == 0) {
            return index;
        }
        index++;
    }
    return 0;
}
