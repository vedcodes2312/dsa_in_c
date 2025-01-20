#include<stdio.h>

struct point {    //define a structure
    int x;
    int y;
};

int main()
{
    struct point p1 = {10,20};      //initialize structure
    struct point *ptr = &p1;       //pointer to the structure

    //access members using the -> operator

    printf("x = %d, y = %d \n", ptr->x, ptr->y);

    ptr->x = 30;
    ptr->y = 40;

     printf("modified x = %d, y = %d \n", ptr->x, ptr->y);

return 0; //end of code

}


