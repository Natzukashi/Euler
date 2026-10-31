#include <stdio.h>

int main() {

    long long n = 600851475143;
    long long ans = 0;

    for (long long i = n - 1; i > 1; i--) {
        if (n % i == 0) {
            ans = i;
        }
    }

    printf("%lld", ans);

    return 0;
}
