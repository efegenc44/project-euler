#include <stdio.h>
#include <stdint.h>

int main() {

    // Trial Division
    size_t f = 2;
    uint64_t n = 600851475143;
    while (n > 1) {
        if (n % f == 0) {
            n /= f;
        } else {
            f++;
        }
    }

    printf("Largest Prime Factor: %d\n", f);
    return 0;
}