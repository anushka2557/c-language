
#include <stdio.h>

int main(void) {
    int n;
    printf("Enter non-negative integer: ");
    if (scanf("%d", &n) != 1 || n < 0) return 0;
    unsigned long long fact = 1;
    for (int i = 2; i <= n; ++i) fact *= i;
    printf("%d! = %llu\n", n, fact);
    return 0;
}
