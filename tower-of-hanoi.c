// applications of stack and recursion - DSA

#include<stdio.h>

void tower_of_hanoi(int n, char source, char auxiliary, char destination) {
    if(n == 1)
    {
        printf("Move disk 1 from %c to %c\n",source,auxiliary);
        return;    //concept of recursion and stacks
    }

    tower_of_hanoi(n-1, source, auxiliary, destination);
    printf("Move disk %d from %c to %c\n",n,source,auxiliary);
    tower_of_hanoi(n-1, auxiliary, source, destination);
}

int main()
{
    int n;
    printf("enter number of rings \n");
    scanf("%d",&n);
    tower_of_hanoi(n, 'A', 'B', 'C');
    return 0; 
}