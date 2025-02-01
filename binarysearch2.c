#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr, size, target, low, high, mid;

    // Input size of array
    printf("Enter array size: \n");
    scanf("%d", &size);

    // Allocate memory for the array
    arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Input elements in array sorted
    printf("Enter %d elements in sorted order: \n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Target element input
    printf("Enter target element number to search: \n");
    scanf("%d", &target);

    low = 0;
    high = size - 1;
    int found = 0;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == target) {
            printf("Element found at index %d\n", mid);
            found = 1;
            break;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (!found) {
        printf("Element not found in array\n");
    }

    // Free allocated memory
    free(arr);

    return 0;
}
