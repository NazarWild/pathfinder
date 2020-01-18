#include "../inc/path.h"

bool mx_error_check_1(int argc) {
    if (argc != 2) {
        mx_error_printstr("usage: ./pathfinder [filename]\n");
        return false;
    }
    return true;
}
