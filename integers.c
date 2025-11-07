
#include <stdio.h>

int main(void) {
    int a, b, c;
    printf("Enter three integers: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) return 0;
    int sum = a + b + c;
    double avg = sum / 3.0;
    printf("Sum = %d\nAverage = %.2f\n", sum, avg);
    return 0;
}
