
#include <stdio.h>

int main(void) {
    int a, b;
    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2) return 0;

    printf("Before swap: a = %d, b = %d\n", a, b);

    /* Using third variable */
    int temp = a; a = b; b = temp;
    printf("After swap (using third variable): a = %d, b = %d\n", a, b);

    /* Swap back without third variable (arithmetic) */
    a = a + b; b = a - b; a = a - b; 
    printf("After swap (without third variable): a = %d, b = %d\n", a, b);

    return 0;
}
