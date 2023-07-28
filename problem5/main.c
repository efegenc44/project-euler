#include <stdio.h>

size_t lcm(size_t a, size_t b) {
    size_t big = a > b ? b : a;
    size_t small = a > b ? a : b;

    for (size_t i = big; ; i += big) {
        if (i % small == 0)
            return i;
    }
}

int main() {

    size_t result = 1;
    for (size_t i = 2; i <= 20; i++) {
        result = lcm(i, result);
    }

    printf("Result: %d\n", result);

    return 0;
}