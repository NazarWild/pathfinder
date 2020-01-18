#include "../inc/path.h"

void mx_free_unused_memory_1(char *out, char **arr) {
    mx_del_strarr(&arr);
	if (malloc_size(out))
    	mx_strdel(&out);
}
