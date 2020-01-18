#include "../inc/path.h"

int mx_int_strcmp(int *sino, int *golka, int len1, int len2) {
	int i = 0;

	if (len2 == len1) {
		while (i < len1 && sino[i] == golka[i]){
			i++;
		}
		return (sino[i] - golka[i]);
	}
	return -1;
}
