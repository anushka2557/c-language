include <stdio.h>

void findMinMax(int arr[], int size, int *min, int *max) {
    if (size == 0) return; // Handle empty array case
    *min = *max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) *min = arr[i];
        if (arr[i] > *max) *max = arr[i];
    }
}

int main() {
    int array[] = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int min_val, max_val;
    findMinMax(array, size, &min_val, &max_val);
    printf("Minimum: %d, Maximum: %d\n", min_val, max_val);
    return 0;
}
