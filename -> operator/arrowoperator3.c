#include <stdio.h>
#include <stdlib.h>

struct rectangle {
    int length;
    int breadth;
};

int main() 
{
    // Dynamically allocate the memory for the structure
    struct rectangle *rect = (struct rectangle*)calloc(1,sizeof(struct rectangle));

    // Get user input for the rectangle's dimensions
    printf("Enter the length of the rectangle: ");
    scanf("%d", &rect->length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &rect->breadth);

    // Calculate the area
    int area = rect->length * rect->breadth;

    // Print the rectangle's dimensions and area
    printf("Length = %d\n", rect->length);
    printf("Breadth = %d\n", rect->breadth);
    printf("Area = %d\n", area);

    // Free the dynamically allocated memory
    free(rect);

    return 0; // End
}
