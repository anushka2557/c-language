
#include <stdio.h>

int main(void) {
    int year;
    printf("Enter a year: ");
    if (scanf("%d", &year) != 1) return 0;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                printf("%d is a leap year.\n", year);
            else
                printf("%d is NOT a leap year.\n", year);
        } else {
            printf("%d is a leap year.\n", year);
        }
    } else {
        printf("%d is NOT a leap year.\n", year);
    }

    return 0;
}
