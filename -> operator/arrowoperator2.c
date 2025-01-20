#include<stdio.h>
#include<stdlib.h>

struct rectangle {
    int length;
    int breadth;
};

int main()
{
    //dynamically allocate the memory for the structure
    struct rectangle *rect = (struct rectangle*)malloc(sizeof(struct rectangle));

    rect->length = 10;
    rect->breadth = 20;

    printf("Length = %d\n", rect->length);
    printf("Breadth = %d\n", rect->breadth);

    free(rect);

return 0; //end

}          
