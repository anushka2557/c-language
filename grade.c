
#include <stdio.h>

int main(void) {
    int marks[5];
    int i;
    int total = 0;
    printf("Enter marks of five subjects (0-100):\n");
    for (i = 0; i < 5; ++i) {
        if (scanf("%d", &marks[i]) != 1) return 0;
        total += marks[i];
    }
    double percent = total / 5.0;
    char grade;
    if (percent >= 90 && percent <= 100) grade = 'A';
    else if (percent >= 80) grade = 'B';
    else if (percent >= 60) grade = 'C';
    else grade = 'D';

    printf("Total = %d\nPercentage = %.2f%%\nGrade = %c\n", total, percent, grade);
    return 0;
}
