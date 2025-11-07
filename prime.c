#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0) return false;
    int r = (int)sqrt((double)n);
    for (int i = 3; i <= r; i += 2)
        if (n % i == 0) return false;
    return true;
}

int main(void) {
    int n;
    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1) return 0;
    printf("%d is %sprime.\n", n, isPrime(n) ? "" : "not ");
    return 0;
}
