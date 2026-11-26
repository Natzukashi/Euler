#include <stdio.h>

int main() {

    int sum = 0;
    int sum_square = 0;
    int square_sum = 0;

    for (int i = 1; i <= 100; i++) {
        sum = sum + i;
        square_sum = square_sum + (i * i);
    }

    sum_square = sum * sum;

    printf("%d\n", sum_square - square_sum);

    return 0;
}
