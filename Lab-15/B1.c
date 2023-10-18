#include <stdio.h>

void removeDuplicates(int arr[], int *size) {
    if (*size <= 1) return;

    int newSize = 1;

    for (int i = 1; i < *size; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < newSize; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }

    *size = newSize;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5, 6, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    removeDuplicates(arr, &size);

    printf("\nArray after removing duplicates: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    return 0;
}
