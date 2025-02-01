#include<stdio.h>

int main()
{
    int arr[100], size, target, low, high, mid;
    //input size of array ;
    printf("enter array size \n");
    scanf("%d",&size);
    
    //input elements in array sorted
    printf("enter %d elements in sorted order: \n",size);
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    //target element input
    
    printf("enter target element number to search \n");
   scanf("%d",&target) ;
   low = 0;
   high = size - 1;
   int found = 0 ;
   
   while(low <= high)
   {
       mid = (low + high) / 2;
       
       if(arr[mid] == target)
       {
           printf("element found at index %d\n",mid);
           found = 1;
           break;
       }
       else if(arr[mid] < target)
       {
           low = mid + 1;
       }
       else
       {
           high = mid - 1;
       }
   }
   
   if(!found)
   {
       printf("element not found in array \n");
   }
    
 return 0;   
}
