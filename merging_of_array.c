//merging two arrays(not sorted)
#include<stdio.h>
int main()
{
    int n1, n2, m, index=0;
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    m = n1 + n2;
    int a[n1], b[n2], c[m];
    printf("Enter the elements of the first array: ");
    for(int i=0; i<n1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the elements of the second array: ");
    for(int i=0; i<n2; i++)
    {
        scanf("%d", &b[i]);
    }

    for(int i=0; i<n1; i++)
    {
        c[index] = a[i];
        index++;
    }

    for(int i=0; i<n2; i++)
    {
        c[index] = b[i];
        index++;
    }
    printf("The merged array is: ");
    for(int i=0; i<m; i++)
    {
        printf("%d ", c[i]);
    }
    return 0;
}


