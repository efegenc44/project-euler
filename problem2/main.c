#include <stdio.h>
#include <stdlib.h>

int main() {

    size_t fib[2] = { 1, 2 };
    size_t sum = 0;
    while (fib[1] < 4000000) {
        if (fib[1] % 2 == 0)
            sum += fib[1];

        size_t tmp = fib[1];
        fib[1] = fib[0] + fib[1];
        fib[0] = tmp;
    }

    printf("Sum: %d\n", sum);

    return 0;
}
