#include <stdio.h>

void countNumbers(int arr[], int size) {
    int positiveCount = 0, negativeCount = 0, oddCount = 0, evenCount = 0, zeroCount = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            positiveCount++;
            if (arr[i] % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        } else if (arr[i] < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }

    printf("Positive numbers: %d\n", positiveCount);
    printf("Negative numbers: %d\n", negativeCount);
    printf("Odd numbers: %d\n", oddCount);
    printf("Even numbers: %d\n", evenCount);
    printf("Number of zeros: %d\n", zeroCount);
}

int main() {
    // Example array, you can modify this with your own array
    int arr[] = {3, -5, 0, 8, -2, 0, 10, 4, -7};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Call the function to count numbers
    countNumbers(arr, size);

    return 0;
}
