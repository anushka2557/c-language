
#include <stdio.h>

int main(void) {
    double a, b;
    char op;
    printf("Enter expression (e.g. 2.5 + 3): ");
    if (scanf("%lf %c %lf", &a, &op, &b) != 3) return 0;
    double result;
    switch (op) {
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        case '/':
            if (b == 0) { printf("Error: division by zero\n"); return 0; }
            result = a / b; break;
        case '%':
            if ((int)b == 0) { printf("Error: modulo by zero\n"); return 0; }
            result = (int)a % (int)b; break;
        default:
            printf("Unsupported operator '%c'\n", op); return 0;
    }
    printf("Result = %.6g\n", result);
    return 0;
}
