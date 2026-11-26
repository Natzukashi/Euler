#include <stdbool.h>
#include <stdio.h>

int main() {

    long n = 600851475143;
    long a = 2;

    while (true) {
        bool flag = true;
        while (a * a < n) {
            if (n % a == 0) {
                n = n / a;
                flag = false;
            }
            a = a + 1;
        }

        if (flag) {
            break;
        } else {
            a = 2;
        }
    }

    printf("%ld\n", n);

    return 0;
}
