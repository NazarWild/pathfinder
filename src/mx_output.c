#include "../inc/path.h"

void mx_output(int **mx, int **s, int len, char **isl) {    
	int **path = (int **) malloc (sizeof(int *) * len * len * len * len);    
    int length_of_pathes = mx_find_short_way(mx, s, len, path);
    int y = 0;  
    
    mx_sort_pathes(path, length_of_pathes, len);
    for (y = 0; y < length_of_pathes; y++) {
        mx_out_n(path[y], path[y][len + 1], isl, len);
    }
    for (y = 0; y < len * len * len * len; y++) {
        if (malloc_size(path[y]))
            free(path[y]);
    }
    free(path);
}
