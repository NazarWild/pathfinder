#include "../inc/path.h"


static void out_n_part_1(int *path, int len, char **islands) {
    int i = 0;

    mx_printstr("========================================");
    mx_printstr("\nPath: ");
    mx_printstr(islands[path[len]]);
    mx_printstr(" -> ");
    mx_printstr(islands[path[0]]);
    mx_printstr("\nRoute: ");
    for (i = len; i > 0; i--) {
        mx_printstr(islands[path[i]]);
        mx_printstr(" -> ");
    }
    mx_printstr(islands[path[0]]);
}

void mx_out_n(int *path, int len, char **islands, int length) {
    int i = 0;

    out_n_part_1(path, len, islands);
    mx_printstr("\nDistance: ");
    if (path[length + 1] > 1) {
        i = path[length + 2] + 1;
        mx_printint(path[length + i]);
        for (i = path[length + 2]; i >= 3; i--) {
            mx_printstr(" + ");
            mx_printint(path[length + i] - path[length + i + 1]);
        }
        mx_printstr(" = ");
    }
    mx_printint(path[length + 3]);
    mx_printstr("\n========================================\n");     
}
