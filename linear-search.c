//linear search in C    

#include<stdio.h>
int main(void)
{
    int size, target, found=0;

    //input size of array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    //define the array
    int arr[size];
    printf("Enter the elements of the array: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    //input the target element
    printf("Enter the target element: ");
    scanf("%d", &target);

    //search for the target element
    for(int i=0; i<size; i++)
    {
        if(arr[i] == target)
        {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }
 //if element not found

    if(found == 0)
    {
        printf("Element not found\n");
    }

    return 0;

}

    

