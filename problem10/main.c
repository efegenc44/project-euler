#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

bool is_prime(size_t n) {

    if (n == 1 || n == 0)
        return false;

    for (size_t i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main() {

    uint64_t sum = 0;
    for (size_t i = 0; i < 2000000; ++i) {
        if (is_prime(i))
            sum += i;
    }

    printf("Sum: %lli\n", sum);
    return 0;
}
