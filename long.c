#include <stdio.h>

int main(void) {
    int terms;
    printf("How many terms? ");
    if (scanf("%d", &terms) != 1 || terms <= 0) return 0;
    long long a = 0, b = 1;
    if (terms >= 1) printf("%lld", a);
    for (int i = 2; i <= terms; ++i) {
        printf(" %lld", b);
        long long next = a + b;
        a = b; b = next;
    }
    printf("\n");
    return 0;
}
