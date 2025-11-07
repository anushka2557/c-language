#include <stdio.h>

int main(void) {
    int n;
    printf("Enter N: ");
    if (scanf("%d", &n) != 1) return 0;
    int i = 1, sum = 0;
    while (i <= n) {
        sum += i;
        ++i;
    }
    printf("Sum of 1..%d = %d\n", n, sum);
    return 0;
}
