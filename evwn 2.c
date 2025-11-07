
#include <stdio.h>

int main(void) {
    int n;
    printf("Enter N: ");
    if (scanf("%d", &n) != 1) return 0;
    long long sumEven = 0, sumOdd = 0;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) sumEven += i;
        else sumOdd += i;
    }
    printf("Sum of even numbers = %lld\nSum of odd numbers = %lld\n", sumEven, sumOdd);
    return 0;
}
