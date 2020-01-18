#include "../inc/path.h"

static bool compare(int *a, int *b, int size_a, int size_b) {
	if (a[size_a] > b[size_b])
		return true;
	else if (a[size_a] == b[size_b]) {
		if (a[0] > b[0])
			return true;
		else if (a[0] == b[0]) {
			int size = size_a < size_b ? size_a : size_b;

			for (int i = 1; i < size; ++i)
				if (a[i] != b[i])
					return a[i] > b[i];
		}
	}
	return false;
}

void mx_sort_pathes(int **path, int len_of_arr, int len) {
	int i;
	int *temp = NULL;
	int x;

	for(int k = 0; k < len_of_arr * len_of_arr; k++) {
		for (x = 0; x < len_of_arr - 1; x++) {
			for (i = x + 1; i < len_of_arr; i++) {
				if (compare(path[x], path[i], path[x][len + 1], path[i][len + 1])) {
					temp = path[x];
					path[x] = path[i];
					path[i] = temp;
				}
			}
		}
	}
	free(temp);
}
