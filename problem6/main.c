#include <stdio.h>

int main() {

    size_t sum_of_squares = 0;
    for (size_t i = 1; i <= 100; i++) {
        sum_of_squares += i*i;
    }

    size_t sum = 0;
    for (size_t i = 1; i <= 100; i++) {
        sum += i;
    }
    size_t square_of_sum = sum * sum;

    printf("Difference: %d\n", square_of_sum - sum_of_squares);

    return 0;
}