//DSA - Bubble Sort
#include<stdio.h>   //header files
#include<stdlib.h>

void bubble_sort(int *arr, int n) {    //function for bubble sort
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                //swap the elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() //main function
{
    int n;
    printf("Enter the number of elements: "); //USER INPUT FOR ARRAY  SIZE
    scanf("%d", &n);

    //dynamic memory allocation of array
    int *arr = (int *)calloc(n, sizeof(int));
    if(arr == NULL)  //IF MEMORY ALLOCATION FAILS
    {
        printf("Memory not allocated\n");
        exit(0);
    }

    printf("Enter the elements: ");   //loop for user defined input
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    bubble_sort(arr, n);    //function call

    printf("Sorted array: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    free(arr);    //free the allocated memory
    return 0;
}