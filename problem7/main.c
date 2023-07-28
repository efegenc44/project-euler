#include <stdio.h>
#include <stdbool.h>

bool is_prime(size_t n) {

    if (n == 1)
        return false;

    for (size_t i = 2; i < n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main() {

    size_t i = 2;
    for (size_t count = 0; count < 10001; ++i) {
        if (is_prime(i))
            count += 1;
    }

    printf("10001st prime number: %d\n", i - 1);

    return 0;
}
