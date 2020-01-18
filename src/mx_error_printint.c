#include "../inc/path.h"

static int check_1(int n) {
    if (n == 0) {
        mx_print_error_char('0');
    }
    if (n == -2147483648) {
        mx_print_error_char('-');
        mx_print_error_char('2');
        n = 147483648;
    }
    return n;
}

static void for_auditor(bool check, int buffer, int pow, int count) {
    int i;

    if (check) {
        mx_print_error_char('-');
    }
    for (i = 0; i < count; i++) {
        mx_print_error_char(buffer / pow + 48);
        buffer = buffer % pow;
        pow = pow / 10;
    }
}

void mx_error_printint(int n) {
    int count = 0;
    int check = 0;
    int pow = 1;
    int buffer = 0;
        
    n = check_1(n);
    if (n < 0) {
        n = n * -1;
        check = 1;
    }
    buffer = n;
    while (n != 0) {
        n = n / 10;
        count++;
    }
    for (int i = 0; i < count - 1; i++) {
        pow = pow * 10;
    }
    for_auditor(check, buffer, pow, count);
}
