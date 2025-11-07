#include <stdio.h>

int main() {
    int n;

    // Input the size of the arrays
    printf("Enter the size of the arrays: ");
    scanf("%d", &n);

    int arr1[n], arr2[n], sum[n];

    // Input elements for the first array
    printf("Enter elements of the first array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input elements for the second array
    printf("Enter elements of the second array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    // Calculate the sum of corresponding elements
    for (int i = 0; i < n; i++) {
        sum[i] = arr1[i] + arr2[i];
    }

    // Print the arrays
    printf("\nFirst Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }

    printf("\nSecond Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    printf("\nSum Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", sum[i]);
    }

    return 0;
}
