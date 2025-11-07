#include <stdio.h>

int reverseNumber(int n) {
    int rev = 0;
    int sign = (n < 0) ? -1 : 1;
    n = (n < 0) ? -n : n;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return sign * rev;
}

int main(void) {
    int num;
    printf("Enter integer to reverse: ");
    if (scanf("%d", &num) != 1) return 0;
    printf("Reversed = %d\n", reverseNumber(num));
    return 0;
}
