#include <stdio.h>
#include <stdbool.h>

#define BASE 10

bool is_palindrome(size_t n) {
    size_t number = n;

    // Construct reverse of n
    size_t rev_n = 0;
    while (number > 0) {
        size_t last_digit = number % BASE;
        rev_n = rev_n * BASE + last_digit;
        number /= BASE;
    }

    // if n is palindrome, difference of
    // its palindrome and itself is 0
    return n - rev_n == 0;
}

size_t largest() {
    size_t max = 0;
    for (size_t i = 999; i >= 100; i--) {
        for (size_t j = 999; j >= 100; j--) {
            size_t product = i * j;
            // printf("i: %d, p: %d, product: %d\n", i, j, product);
            if (is_palindrome(product))
                max = max < product ? product : max;
        }
    }

    return max;
}

int main() {

    printf("%d\n", largest());
    // 906609
    return 0;
}