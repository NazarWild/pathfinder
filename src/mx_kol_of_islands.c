#include "../inc/path.h"

int mx_kol_of_islands(char **file) {
    int kol_islands = 0;
    char **islands = mx_islands_in_mass_of_str(file);
    while (islands[kol_islands]) {
        kol_islands++;
    }
    if (malloc_size(islands))
        free(islands);
    return kol_islands;
}
