#include "../inc/path.h"

int **mx_create_s(int kol_graphs) {
    int **s = (int **) malloc (sizeof(int *) * 4);
    int j;
    
    for(j = 0; j < 3; j++) {
        s[j] = (int *) malloc (sizeof(int) * kol_graphs);
        for(int i = 0; i < kol_graphs; i++) {
            s[j][i] = 0;
        }
    }
    return s;
}
