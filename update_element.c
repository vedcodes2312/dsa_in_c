//update and element in array

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, index, new_val;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));
    if(arr == NULL)
    {
        printf("Memory not allocated");
        return -1;
    }

    printf("enter %d elements of array: ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the index and value to update range (0 to %d): ",n-1);
    scanf("%d", &index);

    if(index < 0  || index > n-1)
    {
        printf( "index not valid");
        free(arr);
        return -1;
    }
    printf("enter the new value: ");  //input of new element value
    scanf("%d",&new_val);

    arr[index] = new_val;

    printf(" the updated array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    free(arr);
  return 0;
}