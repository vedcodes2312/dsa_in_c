#include <stdio.h>
// function for insertion sort
void insertion_sort(int *array, int n) {
    for (int i = 1; i < n; i++) {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}

// Main function
int main() {
    int arraysize;
    printf("Enter size of array: \n");
    scanf("%d", &arraysize);
    int array[arraysize];

    printf("Enter array elements:\n");
    for (int i = 0; i < arraysize; i++) {
        scanf("%d", &array[i]);
    }

    insertion_sort(array, arraysize);

    printf("Sorted array:\n");
    for (int i = 0; i < arraysize; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}
