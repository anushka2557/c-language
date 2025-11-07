
#include <stdio.h>

int main(void) {
    int a, b, c;
    printf("Enter three integers: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) return 0;
    int greatest;
    if (a >= b) {
        if (a >= c) greatest = a;
        else greatest = c;
    } else {
        if (b >= c) greatest = b;
        else greatest = c;
    }
    printf("Greatest = %d\n", greatest);
    return 0;
}
