#include "../inc/path.h"
static void special_for_auditor (char **file, char **all_islands, int k, int i) {
    int check = 1;
    int index;

    for (i = 0; file[i]; i++){
        if (i % 3 == 0){
            continue;
        }
        for (index = 0; index < k; index++) {
            if (mx_char_strcmp(all_islands[index],file[i]) == 0){
                check = 0;
                break;
            }
            else 
                check = 1;
        }
        if (check == 1) {
            all_islands[k] = file[i];
            k++;
        }
    }
}

char **mx_islands_in_mass_of_str (char **file) {
    char **all_islands = NULL;
    int k = 0;
    int size = 0;
    int i = 1;

    while (file[size]) {
        size++;
    }
    all_islands = (char **)malloc(sizeof(char *) * size);
    special_for_auditor (file, all_islands, k, i);
    return all_islands;
}
