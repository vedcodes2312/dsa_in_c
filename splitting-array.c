//splitting an array

#include<stdio.h>
#include<stdlib.h>    //FOR malloc, sizeof, free

int main()
{
    int n, start, end;
    printf("enter the size of the original array: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));

  if(arr == NULL)
  {
    printf("Memory not allocated.\n");
    return -1;
  }

printf("Enter the elements of the array(%d): ", n);
for(int i = 0; i < n; i++)
{
    scanf("%d", &arr[i]);
}
printf("Enter the start and end index to split the array:(0 to %d): ", n-1);
scanf("%d %d", &start, &end);

if(start < 0 || start >= n || end < 0 || end >= n)
{
    printf("Invalid index\n");
    free(arr);
    return -1;
}

int size = end - start + 1;    // or int *res = (int *)malloc((end - start + 1) * sizeof(int)) 
int *res = (int *)malloc(size * sizeof(int));   //creating a new array to store the splitted array
 
if(res == NULL)
{
    printf("Memory not allocated.\n");
    free(arr);
    return -1;
}

//SPLITTING THE ARRAY
for(int i = start; i <= end; i++)
{
    res[i - start] = arr[i];
}

printf("The splitted array is: ");  //PRINT THE NEW RESULTANT ARRAY
for(int i = 0; i < size; i++)
{
    printf("%d ", res[i]);
}

//FREE ALLOCATED MEMORY
free(arr);
free(res);
return 0;
}
